CC = gcc
CFLAGS = -Wall -fPIC
LIB_DIR = lib
APP_DIR = app
LIB_NAME = libmylib.so
LIB_SRC = $(LIB_DIR)/mylib.c
APP_EXEC = $(APP_DIR)/main
PREFIX = /usr/local
LIB_INSTALL_DIR = $(PREFIX)/lib
INCLUDE_INSTALL_DIR = $(PREFIX)/include

.PHONY: all clean install uninstall

all: $(LIB_DIR)/$(LIB_NAME) $(APP_EXEC)

# 1️⃣ 建立共享函式庫
$(LIB_DIR)/$(LIB_NAME): $(LIB_SRC)
	$(CC) -shared -fPIC -o $@ $^

# 2️⃣ 編譯應用程式
$(APP_EXEC): $(APP_DIR)/main.c $(LIB_DIR)/$(LIB_NAME)
	$(CC) -o $@ $(APP_DIR)/main.c -L$(LIB_DIR) -lmylib -I$(LIB_DIR)

# 3️⃣ 安裝共享函式庫和標頭檔
install: all
	mkdir -p $(LIB_INSTALL_DIR) $(INCLUDE_INSTALL_DIR)
	cp $(LIB_DIR)/$(LIB_NAME) $(LIB_INSTALL_DIR)/
	cp $(LIB_DIR)/mylib.h $(INCLUDE_INSTALL_DIR)/
	ldconfig -v

# 4️⃣ 解除安裝
uninstall:
	rm -f $(LIB_INSTALL_DIR)/$(LIB_NAME)
	rm -f $(INCLUDE_INSTALL_DIR)/mylib.h
	ldconfig -v

# 5️⃣ 清理檔案
clean:
	rm -f $(LIB_DIR)/$(LIB_NAME) $(APP_EXEC)

