/**
 * @file P01.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 输入一个数字，输出这个数是否为奇数
 */

#include <stdio.h>

extern int isOdd(int);

int main(void)
{
    int num = 0;
    printf("请输入一个数字，我将告诉你它是否为奇数\n");
    scanf("%d", &num);
    int condition = isOdd(num);
    if (condition)
    {
        printf("%d 是一个奇数", num);
    } else
    {
        printf("%d 不是一个奇数", num);
    }
    return 0;
}
