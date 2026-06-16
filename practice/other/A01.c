//
// Created by leoliao on 2026/6/16.
// title：写一个函数求 2 个数的较大值
//
#include <stdio.h>

int getMaxNumber(int a,int b)
{
    int c = 0;
    if (a>b)
    {
        c = a;
    } else
    {
        c = b;
    }
    return c;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = getMaxNumber(a,b);
    printf("%d\n", c);
    return 0;
}
