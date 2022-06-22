/*!
 *  @file libxutils/src/errex.c
 *
 *  This source is part of "libxutils" project
 *  2015-2020  Sun Dro (f4tb0y@protonmail.com)
 * 
 * @brief Exit signal handling and backtrace.
 */

#include "xstd.h"
#include "errex.h"
#ifdef __linux__
#include <execinfo.h>
#endif

#define BACKTRACE_SIZE 10

#ifdef __linux__
void xutils_dbg_backtrace(void)
{
    void *pAddrs[BACKTRACE_SIZE];
    char **pSymbol;
    int i = 0;

    int nSize = backtrace(pAddrs, sizeof(pAddrs) / sizeof(pAddrs[0]));
    if (nSize <= 0)
    {
        printf("No backtrace available\n");
        return;
    }
    printf("Backtrace with %d functions\n", nSize);

    pSymbol = backtrace_symbols(pAddrs, nSize);
    if (pSymbol == NULL)
    {
        printf("Can not get symbols for backtrace\n");
        return;
    }

    for (i = 0; i < nSize; ++i)
        printf("Function %d: %s\n", i, pSymbol[i]);

    if (pSymbol) free(pSymbol);
}
#endif

void errex(const char * pMsg, ...)
{
    if (pMsg != NULL)
    {
        char sMsg[XMSG_MIN];
        va_list args;

        va_start(args, pMsg);
        vsnprintf(sMsg, sizeof(sMsg), pMsg, args);
        va_end(args);

        printf("<%s:%d> %s: %s\n",
            __FILE__, __LINE__,
            __FUNCTION__, sMsg);
    }

    exit(EXIT_FAILURE);
}

void XSig_Callback(int nSig)
{
    /* Handle signals */
    switch(nSig)
    {
        case SIGSEGV:
        case SIGILL:
#ifdef __linux__
        case SIGBUS:
        xutils_dbg_backtrace();
#endif
            break;
        case SIGINT:
        case SIGTERM:
            printf("Received interrupt/termination signal\n");
            break;
        default:
            break;
    }

    exit(EXIT_FAILURE);
}


int XSig_Register(int *pSignals, size_t nCount, xsig_cb_t callback)
{
    struct sigaction sact;
    sigemptyset(&sact.sa_mask);
    sact.sa_flags = 0;
    sact.sa_handler = callback;

    size_t i;
    for (i = 0; i < nCount; i++)
        if (sigaction(pSignals[i], &sact, NULL))
            return pSignals[i];

    return 0;
}

int XSig_ExitSignals(void)
{
#ifndef WIN32
    int nSignals[5];
    nSignals[0] = SIGINT;
    nSignals[1] = SIGILL;
    nSignals[2] = SIGBUS;
    nSignals[3] = SIGSEGV;
    nSignals[4] = SIGTERM;
    return XSig_Register(nSignals, 5, XSig_Callback);
#endif
}
