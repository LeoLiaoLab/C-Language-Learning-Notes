//
// Created by leoliao on 2026/6/6.
// title: 选择和循环语句
//
#include <stdio.h>

int main()
{
    // 使用 if 语句实现用户对游戏的选择并进行反馈
    // char check = '1';
    // printf("请输入游戏编号选择一款游戏\n 1.MC \n 2.迷你世界\n");
    // scanf("%c", &check);
    // if (check == '1')
    // {
    //     printf("你选择了一款非常好的开发世界沙盒游戏");
    // } else
    // {
    //     printf("你选择了一坨Shit");
    // }


    // 结合 while 循环 使用 必须要让用户选择MC 不然就一直提问
    char check = '0';
    while (check != '1')
    {
        // 这里会有一个问题 是一点经典的C语言问题这里的提问会在你第二次后进入提问时会输出2次提问
        // 原因是读取到了\n
        // 如何解决这个问题呢？
        // 在占位符 %c 前面加一个空格（这个空格表示跳过所有空白字符）
        printf("请输入游戏编号选择一款游戏\n 1.MC \n 2.迷你世界\n");
        scanf(" %c", &check);
        printf("%d", check);// 这里输出的2次的值并不同一次是 10 一次是 50 10对应ASCII 换行 而50对应 ASCII 的2
    }

    if (check == '1')
    {
        printf("你选择了一款非常好的开发世界沙盒游戏");
    } else
    {
        printf("你选择了一坨Shit");
    }

    return 0;
}