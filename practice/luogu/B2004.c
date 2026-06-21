/**
 * @file B2004.c
 * @author leoliao
 * @date 2026-06-22
 * @brief https://www.luogu.com.cn/problem/B2004 对齐输出
 */

#include <stdio.h>

int main()
{
    long a = 0;
    long b = 0;
    long c = 0;

    scanf("%d %d %d", &a, &b, &c);

    // %8d 总宽度 8 个字符，不足的部分左边补空格。（8 最小宽度，比8宽，直接全输出）
    printf("%8d %8d %8d", a, b, c);
    return 0;
}