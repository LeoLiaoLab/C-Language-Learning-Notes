//
// Created by leoliao on 2026/6/14.
// https://www.nowcoder.com/practice/61a0f16117484d219b59c62224b33b1c
//
#include <stdio.h>

int f(int x)
{
    if (x < 0)
    {
        return 1;
    } else if (x == 0)
    {
        return 0;
    } else
    {
        return -1;
    }
}

int main()
{
    int x = 0;
    scanf("%d",&x);
    int y = f(x);
    printf("%d\n", y);
    return 0;
}