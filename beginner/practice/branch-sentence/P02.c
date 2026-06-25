/**
 * @file P02.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 输出 1 ~ 100 之间的奇数
 */

#include <stdio.h>

extern int isOdd(int);

int main(void)
{
    int n = 1;
    while (n <= 100)
    {
        int condition = isOdd(n);
        if (condition)
        {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}
