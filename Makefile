####################################
# Automatically generated by SMake #
# https://github.com/kala13x/smake #
####################################

CFLAGS = -g -O2 -Wall -D_XUTILS_USE_SSL -I./src -I./media
LIBS = -lpthread -lssl -lcrypto
NAME = libxutils.a
ODIR = ./obj
OBJ = o

OBJS = errex.$(OBJ) \
	hash.$(OBJ) \
	http.$(OBJ) \
	list.$(OBJ) \
	sync.$(OBJ) \
	thread.$(OBJ) \
	xcpu.$(OBJ) \
	xlog.$(OBJ) \
	xmap.$(OBJ) \
	xtime.$(OBJ) \
	xtype.$(OBJ) \
	xver.$(OBJ) \
	sock.$(OBJ) \
	xtop.$(OBJ) \
	xcli.$(OBJ) \
	addr.$(OBJ) \
	xfs.$(OBJ) \
	xjson.$(OBJ) \
	xaes.$(OBJ) \
	array.$(OBJ) \
	crypt.$(OBJ) \
	xbuf.$(OBJ) \
	xstr.$(OBJ) \
	event.$(OBJ) \
	mdtp.$(OBJ) \
	ntp.$(OBJ) \
	rtp.$(OBJ) \
	ts.$(OBJ) \
	xapi.$(OBJ)

OBJECTS = $(patsubst %,$(ODIR)/%,$(OBJS))
INSTALL_INC = /usr/local/include/xutils
INSTALL_BIN = /usr/local/lib
VPATH = ./src:./media

.c.$(OBJ):
	@test -d $(ODIR) || mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c -o $(ODIR)/$@ $< $(LIBS)

$(NAME):$(OBJS)
	$(AR) rcs -o $(ODIR)/$(NAME) $(OBJECTS)

.PHONY: install
install:
	@test -d $(INSTALL_BIN) || mkdir -p $(INSTALL_BIN)
	@install -m 0755 $(ODIR)/$(NAME) $(INSTALL_BIN)/
	@test -d $(INSTALL_INC) || mkdir -p $(INSTALL_INC)
	@cp -r ./src/*.h $(INSTALL_INC)/
	@cp -r ./media/*.h $(INSTALL_INC)/

.PHONY: clean
clean:
	$(RM) $(ODIR)/$(NAME) $(OBJECTS)
