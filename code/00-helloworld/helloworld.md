
使用gcc/g++/cmake编译C/C++程序

gcc: C语言编译器，也可以编译C++程序，但是C++程序需要加上-std=c++11等参数来支持C++11标准，并且需要链接C++标准库。

```bash
# 编译C程序
gcc hello.c -o hello
# 执行C
./hello
```

g++: C++语言编译器，可以直接编译C++程序，不需要额外参数。

```bash
# 编译C++程序
g++ ./helloworld.cpp -o helloworld
# 执行C++
./helloworld
```

gcc和g++都可以通过-o参数指定输出文件名。

make: 编译工具，用于执行编译指令
    makefile: 编译指令文件

```bash
# make可以直接编译 makefile中的指令
make
# 也可以指定编译哪个目标，例如：
make hello
# 清理编译结果
make clean
```

cmake: 跨平台编译工具，可以生成makefile等文件
    cmakelists.txt: cmake的配置文件


```bash
# 编译
mkdir build
cd build
cmake ..
make
# 执行
./helloworld.c
./helloworld.cpp
```

clang: C/C++语言编译器
```bash
clang hello.c -o hello    # 编译 C 程序
clang++ hello.cpp -o hello  # 编译 C++ 程序
```

MSVC: Microsoft Visual C++编译器

bazel: 构建工具