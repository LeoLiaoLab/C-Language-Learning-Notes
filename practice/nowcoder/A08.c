/**
 * @file A08.c
 * @author leoliao
 * @date 2026年6月24日 星期三
 * @brief https://www.nowcoder.com/practice/58b6a69b4bf943b49d2cd3c15770b9fd
 */

#include <stdio.h>
#include <math.h>

int main()

{
    int studentNumber = 0;
    float clang = 0,math = 0,english = 0;
    scanf("%d;%f,%f,%f", &studentNumber, &clang,&math, &english);
    // round 把一个浮点数四舍五入到最接近的整数。
    // round 是 “远离 0” 的四舍五入
    // 例如 round(-3.5) = -4
    clang = round(clang * 100) / 100;
    math = round(math * 100) / 100;
    english = round(english * 100) / 100;
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", studentNumber, clang, math, english);
    return 0;
}