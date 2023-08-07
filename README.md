[![MIT License](https://img.shields.io/badge/License-MIT-brightgreen.svg?)](https://github.com/kala13x/libxutils/blob/main/LICENSE)
[![C/C++ CI](https://github.com/kala13x/libxutils/actions/workflows/make.yml/badge.svg)](https://github.com/kala13x/libxutils/actions/workflows/make.yml)
[![CMake](https://github.com/kala13x/libxutils/actions/workflows/cmake.yml/badge.svg)](https://github.com/kala13x/libxutils/actions/workflows/cmake.yml)
[![SMake](https://github.com/kala13x/libxutils/actions/workflows/smake.yml/badge.svg)](https://github.com/kala13x/libxutils/actions/workflows/smake.yml)
[![CodeQL](https://github.com/kala13x/libxutils/actions/workflows/codeql.yml/badge.svg)](https://github.com/kala13x/libxutils/actions/workflows/codeql.yml)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/25173/badge.svg?)](https://scan.coverity.com/projects/libxutils)

## libxutils - Cross-platform C library release 2.x

`libxutils` is a cross-platform `C` library that provides safer implementations of various functionality to make routine tasks easier for programs written in `C` and it's compatible languages like `C++`, `Rust`, and `Objective C`. The library offers a range of features including containers, data structures, network tools, cryptography algorithms, string manipulations, system utilities, `HTTP/S` & `WS/WSS` client/server, `JSON` parser/serializer, `JWT` tokens, and etc. A list of key features can be found below.

`libxutils` is available for `Linux`, `Unix` and `Windows` operating systems and is released under the `MIT` License. To check the version of the library you have, you can refer to the file `src/xver.h`. Please note that the list of features provided in the README is incomplete. For more information about the full range of features, you can refer to the individual header files linked below or browse the source code.

#### Containrers:
- [Dynamically allocated array with sort and search features](https://github.com/kala13x/libxutils/blob/main/src/data/array.h)
- [Dynamically allocated byte and data buffers](https://github.com/kala13x/libxutils/blob/main/src/data/xbuf.h)
- [Dynamically allocated key-value pair map](https://github.com/kala13x/libxutils/blob/main/src/data/map.h)
- [Dynamically allocated hash map](https://github.com/kala13x/libxutils/blob/main/src/data/hash.h)
- [Dynamically allocated C string](https://github.com/kala13x/libxutils/blob/main/src/data/xstr.h)
- [Implementation of linked list](https://github.com/kala13x/libxutils/blob/main/src/data/list.h)

#### Network:
- [Event based client/server API for HTTP/S, WS/WSS and TCP/SSL connections](https://github.com/kala13x/libxutils/blob/main/src/net/api.h)
- [Cross-platform event library based on poll(), epoll() and WSAPoll()](https://github.com/kala13x/libxutils/blob/main/src/net/event.h)
- [Cross-platform socket library with TCP, UDP and SSL support](https://github.com/kala13x/libxutils/blob/main/src/net/sock.h)
- [Web Socket client/server library](https://github.com/kala13x/libxutils/blob/main/src/net/ws.h)
- [HTTP client/server library](https://github.com/kala13x/libxutils/blob/main/src/net/http.h)
- [MDTP client/server library](https://github.com/kala13x/libxutils/blob/main/src/net/mdtp.h)
- [RTP packet parser library](https://github.com/kala13x/libxutils/blob/main/src/net/rtp.h)

#### Cryptography:
- [Implementation of various encrypt/decrypt algorithms](https://github.com/kala13x/libxutils/blob/main/src/crypt/crypt.h)
- [Base64 and Base64Url encrypt/decrypt functions](https://github.com/kala13x/libxutils/blob/main/src/crypt/base64.h)
- [AES based on FIPS-197 implementation by Christophe Devine](https://github.com/kala13x/libxutils/blob/main/src/crypt/aes.h)
- [Implementation of HMAC algorithm with SHA256 and MD5](https://github.com/kala13x/libxutils/blob/main/src/crypt/hmac.h)
- [RSA implementation based on OpenSSL library](https://github.com/kala13x/libxutils/blob/main/src/crypt/rsa.h)
- [Implementation of SHA256 calculations](https://github.com/kala13x/libxutils/blob/main/src/crypt/sha256.h)
- [Implementation of SHA1 calculations](https://github.com/kala13x/libxutils/blob/main/src/crypt/sha1.h)
- [Implementation of CRC32 calculations](https://github.com/kala13x/libxutils/blob/main/src/crypt/crc32.h)
- [Implementation of MD5 calculations](https://github.com/kala13x/libxutils/blob/main/src/crypt/md5.h)

#### System:
- [Cross-platform file and directory operations](https://github.com/kala13x/libxutils/blob/main/src/sys/xfs.h)
- [Cross-platform CPU affinity manipulation](https://github.com/kala13x/libxutils/blob/main/src/sys/xcpu.h)
- [Implementation of advanced file search](https://github.com/kala13x/libxutils/blob/main/src/sys/xfs.h)
- [System time manipulation library](https://github.com/kala13x/libxutils/blob/main/src/sys/xtime.h)
- [Performance monitoring library](https://github.com/kala13x/libxutils/blob/main/src/sys/xtop.h)
- [Advanced logging library](https://github.com/kala13x/libxutils/blob/main/src/sys/xlog.h)

#### Miscellaneous:
- [JSON parser and writer library with lint and minify support](https://github.com/kala13x/libxutils/blob/main/src/data/xjson.h)
- [Implementation of JSON Web Tokens with HS256 and RS256](https://github.com/kala13x/libxutils/blob/main/src/data/jwt.h)
- [Cross-platform synchronization library](https://github.com/kala13x/libxutils/blob/main/src/sys/sync.h)
- [Cross-platform multithreading library](https://github.com/kala13x/libxutils/blob/main/src/sys/thread.h)
- [Command-Line interface operations](https://github.com/kala13x/libxutils/blob/main/src/sys/xcli.h)
- [C String manipulation library](https://github.com/kala13x/libxutils/blob/main/src/data/xstr.h)

### Installation
There are several ways to build and install the project.

#### Using CMake
If you have a `CMake` tool installed in your operating system, this is probably the easiest and best way to build a project:

```bash
git clone https://github.com/kala13x/libxutils.git
cd libxutils
mkdir build && cd build
cmake .. && make
sudo make install
```

#### Using SMake
[SMake](https://github.com/kala13x/smake) is a simple Makefile generator tool for the Linux/Unix operating systems:

```bash
git clone https://github.com/kala13x/libxutils.git
cd libxutils
smake && make
sudo make install
```

#### Using build script
A relatively simple way to build and install a project is to use a build script.

```bash
git clone https://github.com/kala13x/libxutils.git
cd libxutils
./build.sh cmake --install --cleanup
```

You can either choose `cmake`, `smake` or `make` as the first argument, but `cmake` is recommended on the platforms other than the Linux.

#### Using Makefile
The project can also be built with a pre-generated `Makefile` for linux.

```bash
git clone https://github.com/kala13x/libxutils.git
cd libxutils
make
sudo make install
```

### Build particular files only
If you want to use particular files and functions, you can configure the library and select only that functionality for the build. In this way, it is possible not to increase the size of the program and to avoid the linkage of unused code.

The `libxutils` project has a config file that contains a list of modules that will be included in the build. This file is used by the `build.sh` script, which resolves dependencies for each enabled module and generates a `CMakeList.txt` file.

Open `xutils.conf` file with a text editor and mark only the functionality you want to include in the build. Use a low-case `y` symbol to enable and any other symbol to disable modules. Removing a related line from the list will also disable the module.

Example:
```
...
USE_ARRAY=n
USE_CRYPT=n
USE_XTIME=n
USE_EVENT=y
USE_LIST=n
USE_XBUF=n
USE_HASH=n
USE_SOCK=n
USE_XLOG=y
USE_XSTR=n
...
```
After updating the configuration, use the `build.sh` script to generate the `Makefile` and build the project. Use `cmake` or `make` as the first argument for the script.

```bash
./build.sh cmake
```

You may notice that when you select only one module, several other modules may be also included in the build. Because some files depend on other files in the project, the `build.sh` script will automatically resolve these dependencies and include required files in the build as well.

For example, if you only mark HTTP library for a build, the socket library will be automatically enabled because HTTP uses some functionality from sockets.

### Dependencies
The only dependency that the library uses is the `openssl-devel` package for the `SSL` and `RSA` implementations.\
You can either install the `openssl-devel` package or disable the `SSL` support in the library.

#### Install OpenSSL development package
Red-Hat family: `sudo dnf install openssl-devel`\
Debian family: `sudo apt-get install libssl-dev`

#### Disable SSL support in the library
If you use the `cmake` or `smake` tools for building the project, you do not need to disable anything manually,\
these tools will automatically disable SSL support if the OpenSSL library is not installed in the system.

If you use `Makefile` to build the project, all you need to adjust `CFLAGS` and `LIBS` in `Makefile`.
- Remove `-D_XUTILS_USE_SSL` entry from the `CFLAGS`.
- Remove `-lssl` and `-lcrypto` entries from the `LIBS`.

### Usage
If you want to use the library, include the required `<xutils/*.h>` header files in your source code and\
use `-lxutils` linker flag while compiling your project. See the example directory for more information.

### Tools & Examples

The project includes several examples and tools in the `examples` directory.\
The examples can be built by using the `CMake` tool or `Makefile` from that directory.

```bash
cd examples
mkdir build
cd build
cmake ..
make
```

#### XTOP and more

<p align="center">
    <img src="https://raw.githubusercontent.com/kala13x/libxutils/main/examples/xtop.png" alt="alternate text">
</p>

`XTOP` is `HTOP` like performance monitor that supports to monitor CPU, memory, and network traffic into a single window. In addition, it has powerful `REST API` client/server mode and much more.

After building the sources in example directory, run `sudo make install` command to install following tools in the system:

- `xcrypt` - File and text encrypt/decrypt tool for CLI
- `xpass` - Secure password manager tool for CLI
- `xjson` - JSON linter and minifier tool for CLI
- `xhttp` - Powerful HTTP client tool for CLI
- `xtop` - Advanced resource monithor for CLI
- `xsrc` - Advanced file search tool for CLI

Run each of this tool with `-h` argument to check out the usage and version information.
