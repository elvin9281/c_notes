# Dynamic Library Project

## 📁 資料夾結構
```
├── app
│   ├── main
│   └── main.c
├── lib
│   ├── mylib.c
│   └── mylib.h
└── Makefile
```

## 🔧 Build
```sh
make
```

## 🔄 LD 更新 (確保系統識別共享函式庫)
```sh
sudo ldconfig -v
```

## 📦 Install
```sh
sudo make install
```

## ❌ Uninstall
```sh
sudo make uninstall
```

---
✅ `make install` 會將 `libmylib.so` 安裝到 `/usr/local/lib/` 並更新 `ldconfig`，確保系統可識別該函式庫。  
✅ `make uninstall` 會移除已安裝的共享函式庫和標頭檔案。


