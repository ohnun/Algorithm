# 算法学习记录

> 这个仓库保存了学习左程云算法的代码和笔记. 

## 下载项目

```bash
git clone https://github.com/ohnun/Algorithm.git

# 如果下载失败, 用下面的命令
git clone https://gitee.com/ohnun/Algorithm.git
```

以下是环境版本信息: 

1. 操作系统: Linux5.15.146.1-microsoft-standard-WSL2 x86_64 GNU/Linux
2. 编译器: gcc version 11.4.0 (Ubuntu 11.4.0-1ubuntu1~22.04)
3. Python: 3.10.6

## 项目文件

- `./src/` 目录下存放一些代码模板. 
- `draft.py` 和 `Makefile` 这两个文件是用于构建 `main.cpp` 的. 
- `main.cpp` 用于编写代码. 

`main.cpp` 中生成的内容和 `draft.py` 中的 `tamplate` 一样, 
**可以根据需要更改 tamplate, 生成需要的 main.cpp.** 

## 编写代码

在 `main.cpp` 中编写代码, 

```bash
# 用于清除 main 文件的残留代码
make clean
```

```cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Hello, world!" << endl;
    
    return 0;
}
```

代码编写完成之后, 在命令行中输入 `make` 编译代码, 之后用 `./main` 执行代码. 
