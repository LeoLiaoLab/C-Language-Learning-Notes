//
// Created by leoliao on 2026/6/11.
// title：数组
//

// C语言中的数组用来存放同类型数据的集合
#include <stdio.h>
#include <string.h>

int main()
{
    // 创建一个长度为10的整型类型数组
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // 如何访问数组中的某一项
    // 访问数组中的某一项需要通过 C语言在数组中提供的一个东西 数组下标
    // 数组下标是从0开始的
    // 我们举个例子
    // 比如我们现在访问数组中下标为0的项
    printf("%d\n", arr[0]); // 1
    // 下标为 5的项
    printf("%d\n", arr[5]); //6

    // 依次打印出数组中所有的项
    int n = 0;
    while (n < 10)
    {
        printf("数组下标为 %d 的值是：%d\n", n,arr[n]);
        n = n + 1;
    }

    return 0;
}
