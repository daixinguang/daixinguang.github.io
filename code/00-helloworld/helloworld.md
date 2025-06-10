
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

cmake: 跨平台编译工具，可以生成makefile等文件
    cmakelists.txt: cmake的配置文件

clang: C/C++语言编译器

bazel: 构建工具