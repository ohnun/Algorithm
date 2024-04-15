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

## 项目文件

- `./src/` 目录下存放一些代码模板. 
- `./leetcode` 目录下存放重要力扣题代码, `leetCode_xxxx.cpp` 中的 `xxxx` 为题目编号. 
- `draft.c`, `Makefile` 和 `tamplate.txt` 这三个文件是用于构建 `main.cpp` 的. 
- `main.cpp` 用于编写代码. 

`main.cpp` 中生成的内容和 `tamplate.txt` 中一样, 
**<font color="red">可以根据需要更改 tamplate.txt, 生成需要的 main.cpp</font>.** 

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

代码编写完成之后, 在命令行中输入 `make` 编译并运行代码. 
