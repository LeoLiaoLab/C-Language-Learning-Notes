//
// Created by leoliao on 2026/6/11.
// title: 函数
//
#include <stdio.h>

// int 为函数的返回值类型
// add 为函数的名称
// add()中的内容为函数的参数
// {} 为函数体
int add(int x, int y)
{
    return x + y;
}

int main()
{
    int n1 = 0;
    int n2 = 0;
    // 这里有个问题 如果用户除数数字意外的情况会导致计算错误 或 未完全读取到用户所有的输入内容
    scanf("%d %d", &n1, &n2);
    int sum = add(n1, n2);
    printf("%d\n", sum);

    return 0;

}