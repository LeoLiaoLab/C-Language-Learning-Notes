//
// Created by leoliao on 2026/5/30.
// title: 数据类型
//
#include <stdio.h>
// 补充知识
// 1.计算机中的大小单位
// bit 比特位
// byte 字节（1byte = 8bit）
// kb (1024byte = 1kb，下方的以此类推)
// mb
// gb
// tb

// 2.计算机存储的是二进制
// 二进制的中的一个数字也就是 0 或者 1，一位就是 1 bit

// 在 C 语言中提供了7种数据类型
// char 字符数据类型
// short 短整型
// int 整型
// long 长整型
// long long 更长的整型
// float 单精度浮点型
// double 双精度浮点型
int main()
{
    // sizeof 单目操作符就是用来计算数据类型或变量的内存大小（字节）
    // %zu 是用来专门替换 sizeof 单目操作符得到的结果
    printf("%zu\n", sizeof(char)); // 1 byte
    printf("%zu\n", sizeof(short)); // 2 byte
    printf("%zu\n", sizeof(int)); // 4 byte
    printf("%zu\n", sizeof(long)); // 8 byte
    printf("%zu\n", sizeof(long long)); // 8 byte
    printf("%zu\n", sizeof(float)); // 4 byte
    printf("%zu\n", sizeof(double)); // 8 byte
    // 注意：C语言规定 long 的大小 >= int

    int num = 6;
    float price = 6.6;

    // %d 格式说明符 用来替换十进制整数
    // %f 格式说明符 用来替换浮点数
    printf("%d\n", num);
    printf("%f\n", price);

    return 0;
}