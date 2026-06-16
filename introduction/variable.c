//
// Created by leoliao on 2026/5/30.
// title: 变量
//
#include <stdio.h>

// 在C语言中变量分为2种
// 1. 全局变量（指{}外声明的变量）
// 2. 局部变量（指{}内声明的变量）

int num1 = 20; // 全局变量

int main()
{
    // 在你声明一个变量后请进行初始化也就是赋值 否则这个值是一个随机值也可能是0 会给你的代码带来一定的不确定性
    int num1 = 0; // 局部变量
    int num2 = 0;

    printf("num1=%d\n", num1); // 0 在使用变量时局部优先

    // scanf 是一个输入函数 用来获取输入的数据
    // & 对变量的地址进行绑定
    scanf("%d %d", &num1, &num2);

    int num3 = num1 + num2;

    printf("%d\n", num3);

    return 0;
}