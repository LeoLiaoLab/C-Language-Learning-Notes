//
// Created by leoliao on 2026/6/1.
// title: 常量
//
// C 语言中的常量分为
// 1. 字面常量
// 2. const 修饰的常变量
// 3. #define 定义的标识符常量
// 4. enum 定义的枚举常量

#include <stdio.h>

// #define 定义的标识符好常量
#define MAX 100

// enum 定义枚举常量
enum Color
{
    RED,
    GREEN,
    BLUE
};

int main()
{
    // 字面常量
    3.14;
    // const 修饰的常变量
    const double pi = 3.14;
    // pi = 300; 无法进行直接修改

    // 为什么说const修饰的是常变量
    const int n = 10;
    // 这里的n仍然是一个变量，但是不能进行修改，也无法作为数组的长度使用，因为数组的长度必须要是常量而不是常变量
    // 这里没有直接报错是因为Clang编译器的优化造成的，按标准来说这并不规范
    // const int arr[n] = {0,1,2,3,4,5,6,7,8,9};
    // 正确的做法如下
    #define ARR_LENGTH 10
    const int arr[ARR_LENGTH] = {0,1,2,3,4,5,6,7,8,9};
    printf("arr=%p\n", arr); // %p 输出内存中的地址


    printf("MAX=%d\n", MAX);
    printf("pi=%f\n", pi);
    printf("%d\n", RED);
    printf("%d\n", GREEN);

    return 0;
}