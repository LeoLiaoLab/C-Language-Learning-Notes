//
// Created by leoliao on 2026/6/16.
// title: 常见关键字
//
#include <stdio.h>
// C 语言中提供了丰富的关键字，这些关键字都是语言本身预先设定好的，用户自己是不能创建关键字的。
/*
    常见关键字：
    int - 整型 long - 长整型 short - 短整型 float - 单精度浮点型 char - 字符型 double - 双精度浮点型
    struct - 结构体 enum - 枚举 union - 联合体（共用体）
    void - 空，无（函数返回类型，函数参数）
    signed - 有符号的 unsigned - 无符号的
    const - 常属性
    extern - 声明外部符号
    register - 寄存器
    static - 静态的
    return 函数返回值
    sizeof - 计算大小（字节）
    typedef - 类型重命名
    if else switch case default
    do while for continue break goto
    volatile
    auto - 自动存储期（表示变量自动创建，自动销毁）
*/
int main()
{
    auto int num = 20; // auto
    int num1 = 20; // 数内部定义的普通变量默认就是 auto，加不加都一样
    return 0;
}
