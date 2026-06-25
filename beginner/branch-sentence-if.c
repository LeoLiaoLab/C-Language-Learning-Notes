/**
 * @file branch-sentence-if.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 分支语句 （选择结构） - if
 */



// if 语句的基本语法
/*
    if (boolean_expression)
        expression
    else (boolean_expression)
        expression

    if (boolean_expression)
        expression
    else if (boolean_expression)
        expression
    else
        expression

    注意：当你条件成立时要执行的 表达式 是多条时请用代码块 {} 括起来

    if (boolean_expression)
    {
        expression1
        expression2
        ....
    }
    else if (boolean_expression)
    {
        expression1
        expression2
        ....
    }
    else
    {
        expression1
        expression2
        ....
    }
*/

#include <stdio.h>

int main(void)
{
    int score = 0;
    printf("请输入用户的考试成绩，获取对应的评分等级！\n");
    scanf("%d", &score);
    if (score >= 60 && score <= 70)
        printf("评分等级：C\n");
    else if (score > 70 && score <= 80)
        printf("评分等级：B\n");
    else if (score > 80 && score <= 90)
        printf("评分等级：A\n");
    else if (score > 90 && score <= 100)
        printf("评分等级：S\n");
    else if (score > 100 || score < 0)
        printf("请输入正确的考试成绩！\n");
    else
        printf("评分等级：D\n");

    // 上面这种方式 没用使用 {} 是因为要执行的表达式仅有一条
    // 当你需要执行多条表达式时，再使用上面这种方式会出现问题

    int condition1 = 0;
    int condition2 = 1;
    if (condition1)
        if (condition2)
        {
            printf("condition1 和 condition2 为真");
        }
    else
        printf("condition1 为假");

    // 你会发现上面这段代码 什么都没有输出
    // 这是一个典型的 悬空 else 问题
    // 因为在 C语言 中， else总是会找和离它最近、且尚未匹配的 else 的 if 配对
    // 上面这段代码 他就和 判断 condition2 的 if 进行了配对
    // 在编译器的理解就变成了如下方这样
    if (condition1)
    {
        if (condition2)
            printf("condition1 和 condition2 为真");
        else
            printf("condition1 为假");
    }

    // 个人建议 尽量将 {} 条件下要执行的表达式 进行包裹
    // 我们对上方的代码进行一个修正
    if (condition1)
    {
        if (condition2)
        {
            printf("condition1 和 condition2 为真");
        }
    }
    else
    {
        printf("condition1 为假");
    }


    return 0;
}