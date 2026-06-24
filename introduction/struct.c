/**
 * @file struct.c
 * @author leoliao
 * @date 2026年6月24日 星期三
 * @brief struct 结构体
 */

// C语言中提供了自定义类型的能力
// 有一种自定义类型就是：struct 结构体
// 结构体是把一些单一类型组合在一起的做法
#include <stdio.h>

// 创建一个结构体 Person 并通过 typedef 对这个类型重命名
typedef struct Person
{
    char name[20];
    int age;
    char gender[10];
    char address[40];
} sp;

void print(sp* pp)
{
    printf("%s %d %s %s\n", (*pp).name, (*pp).age, (*pp).gender, (*pp).address);
    // 通过结构体指针变量访问成员
    // 结构体指针变量 -> 成员
    printf("%s %d %s %s\n", pp -> name, pp -> age, pp -> gender, pp -> address);
}

int main(void)
{

    // 通过结构体创建一个对象
    sp p = {
        "leoliao",
        18,
        "man",
        "earth"
    };

    // 通过.操作符 获取结构体成员的值
    // 结构体对象.结构体成员
    printf("%s %d %s %s\n", p.name, p.age, p.gender, p.address);


    print(&p);
    return 0;
}
