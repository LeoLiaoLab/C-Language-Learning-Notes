/**
 * @file register.c
 * @author leoliao
 * @date 2026-06-22
 * @brief 
 */

#include <stdio.h>

int main()
{
    // 电脑上的存储设备分为 寄存器（集成在CPU上） 高速缓存（cache） 内存 硬盘
    // 这些存储设备从左往右 越来越便宜 并且 空间越来越大

    // 假如你有一个变量 num，在程序中需要频繁的使用它，就可以通过 register 关键字建议编译器把他放在 寄存器当中（当然只是建议)
    // 注意：就算没有建议，在目前的现代化编译器当中，编译器也会主动将一些内容放入寄存器中（优化代码速度）
    register int num = 3; // 建议：把 num 这个变量放在 寄存器当中
    return 0;
}