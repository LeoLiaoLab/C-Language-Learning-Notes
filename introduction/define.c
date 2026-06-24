/**
 * @file #define.c
 * @author leoliao
 * @date 2026-06-23
 * @brief 预处理指令 #define 定义常量和宏
 */

#include <stdio.h>

// #define 定义标识符常量
#define NUM 10

// #define 定义宏
// 宏是有参数的
// ADD - 宏名
// x, y - 宏的参数，参数是无类型的
// ((x) + (y)) - 宏体
#define ADD(x, y) ((x) + (y))

int main()
{
    int a = NUM;
    int arr[NUM] = {0}; 
    printf("%d\n", a);
    printf("%d\n", arr[9]);

    int b = 20;
    int c = 30;
    int d = ADD(b, c); // 这里调用宏时会进行替换 将宏体内容替换至此 int d = ((b) + (c));

    printf("%d\n", d);

    return 0;
}