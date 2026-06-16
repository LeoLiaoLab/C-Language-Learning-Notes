//
// Created by leoliao on 2026/6/1.
// title: 第一个C语言程序
//
// include 包含引入 某一个库 例如下方的 stdio.h
// stdio.h 是一个负责输入输出数据的库
#include <stdio.h>
// 在C语言中必须且仅有一个 main 函数
// main 函数是程序的入口
int main()
{
    // printf 函数就是 stdio.h 这个库提供的一个函数
    printf("hello world\n");
    // 为什么这里 return 0
    // return 0 是指函数会正常的运行 不会发生错误 这是一个约定俗成的规则
    return 0;
}