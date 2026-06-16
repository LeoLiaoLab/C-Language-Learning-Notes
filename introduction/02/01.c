//
// Created by leoliao on 2026/5/30.
// title: 变量的作用域和生命周期
//
// 变量的作用域
// 1. 全局作用域就是整个工程
// 2. 局部作用域是局部变量的所在的局部范围
//

// 变量的生命周期
// 1. 全局变量的生命周期就是整个程序的生命周期
// 2. 局部变量的生命周期进入作用于生命周期开始，退出作用域生命周期结束

#include <stdio.h>

// 全局作用域下的变量
int num1 = 100;

// 声明来自外部（工程中其他文件里的某个变量）的符号
extern int num3;

int main()
{
    {
        // 局部作用域下的变量
        int num2 = 200;
        printf("num2=%d\n", num2);
    }

    printf("num1=%d,num3=%d\n", num1, num3);

    return 0;
}