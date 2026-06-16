//
// Created by leoliao on 2026/6/16.
// title：下方代码输出的结果是什么？
//

#include <stdio.h>
#include <string.h>

int main()
{
    // 下方的代码其实是 “未定义行为”
    // ”未定义行为“ 指的是程序做了标准不允许的事，之后发生什么都没有保证。
    char arr[] = {'a','b','c'};
    printf("%zu\n", strlen(arr)); // 随机值

    // C语言的设计理念是：我相信程序员知道自己在干什么

    char arr2[4] = {'d','e','f'};
    // 这是 “不完全初始化”
    // “不完全初始化” 指的是 初始化一个数组或结构体时，只给部分元素（成员）赋初值，其余部分由编译器自动补零。
    // 因为 '\0' 本质上就是数值 0 （ASCII的0和'\0'的编码值都是0），这也就说明了为什么下方的代码 得到的长度是完全正确的
    printf("%zu\n", strlen(arr2)); // 3

    // 补充：
    // 在 C99 之前，数组的大小都是用常量或者常量表达式来指定的
#define ARR_LENGTH 10
    int arr_[ARR_LENGTH] = {0};
    int arr__[2] = {0};
    int arr___[1+2] = {0};
    // 在 C99 之后，支持了”变长数组“，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的
    int m = 100;
    int arr____[m] = {0}; // error: variable-sized object may not be initialized

    return 0;
}