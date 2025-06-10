/**
 * 使用gcc编译器编译C语言程序
*/

#include <stdio.h> // C语言标准输入输出库
#include <iostream> // C++标准输入输出库
using namespace std;
int main() {
    printf("Hello, World! C\n"); // C语言程序的标准输出语句
    cout << "Hello, World! CPP\n"; // C++的输出语句
    std::cout << "Hello, World! std::CPP"; // 无命名空间的使用方式
    return 0;
}