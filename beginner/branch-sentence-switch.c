/**
 * @file branch-sentence-switch.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 分支语句 （选择结构） - switch
 */

// switch 语句的基本语法
/*
    switch(expression)
    {
        case constant_expression:
            ...
            break;
        case constant_expression:
            ...
            break;
        default :
            ...
    }

    注意：
    1.  switch 语句中的表达式必须是整数类型（char、short、int或枚举），或者是能够隐式转换为整数类型的表达式。
    2. case 可以有任意数量，且必须唯一不能出现重复的值
    3. default 会在不符合所有条件时执行， 是可选的
    4. 在每个 case 标签的代码块结束处通常需要使用 break 语句来终止 switch 语句的执行。
    如果没有 break 语句，程序将会继续执行下一个 case 标签中的代码，直到遇到 break 语句或 switch 语句结束。
    5. switch 允许使用嵌套，但是不建议（会导致代码可读性变差）
*/

#include <stdio.h>

int main(void)
{
    int date = 0;
    printf("请输入数字 1~7 ，我将会为您转换为星期。\n");
    int * p = &date;
    scanf("%d", p); // p 是 date 的内存地址
    switch (*p) // 使用解引用操作符，找到指针所指的对象
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("星期%d\n", date);
            break;
        case 7:
            printf("星期天\n");
            break;
        default :
            printf("非法输入！");
    }
    return 0;
}
