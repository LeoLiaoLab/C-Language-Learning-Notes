/**
 * @file A07.c
 * @author leoliao
 * @date 2026年6月24日 星期三
 * @brief https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743
 */

#include <stdio.h>

int main(void)
{
    int year = 0,month= 0,date= 0;
    // %4d
    // %
    // 4 输入域宽，假如用户输入20030807 %4d 会得到前4个字符
    // d int
    scanf("%4d%2d%2d", &year, &month, &date);
    // %02d 输出2个数字，如果不足2个数字，从左开始补0
    // %
    // 0      补0标志
    // 5      输出域宽
    // d      int
    printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
    return 0;
}
