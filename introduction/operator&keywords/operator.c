//
// Created by leoliao on 2026/6/16.
// title: 操作符
//
#include <stdio.h>
// C 语言是非常灵活的
// C 语言提供了非常丰富的操作符



int getMaxNumber(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    // 1. 算术操作符
    // + 加法
    // - 减法
    // * 乘法
    // / 除法
    // % 取模
    printf("%d\n", 1 + 2); // 3
    printf("%d\n", 3 - 1); // 2
    printf("%d\n", 10 * 10); // 100
    printf("%d\n", 6 / 3); // 2
    // 下面的除法得到的结果并不是小数
    // 这是什么原因呢？
    /*
     原因：
     在 C 语言中进行除法时，如果 / 两边的操作符为整数，那得到的就是整数。
     如果有任意一边为浮点数，那就会得到浮点数。
     */
    printf("%d\n", 7 / 2); // 3
    printf("%f\n", 7 / 2.0); // 3.500000
    // 如何控制输出的浮点数的位数呢？
    // .number number决定了小数的位数（如果写0则无效）
    printf("%.f\n", 7 / 2.0); // 3.5
    // % 取模
    // 取模代表了求 左边操作数 除以 右边操作数 的余数
    // % 的操作数必须是整数 小数是不行的哦
    printf("%d\n",3 % 2); // 1

    // 2. 移位操作符（涉及二进制的运算，后续学习）
    // << 左移操作符
    // >> 右移操作符

    // 3. 位操作符（涉及二进制的运算，后续学习）
    // & 按位与
    // ^ 按位异或
    // | 按位或

    // 4.赋值操作符
    // =
    // +=
    // -=
    // *=
    // /=
    // &= ^= |= >>= <<= (后续学习)
    int a = 0; // 定义变量a并赋值为0（初始化）
    a = 20; // = 赋值
    printf("%d\n", a); // 20
    a = a + 3;
    printf("%d\n", a); // 23
    a += 3; // 这种方式就和a = a + 3; 一样
    printf("%d\n", a); // 26
    a = a - 3;
    printf("%d\n", a); // 23
    a -= 3; // 这种方式就和a = a - 3; 一样
    printf("%d\n", a); // 20

    int b = 30;
    b = b * 4; // 120
    b *= 4; // 这种方式就和b = b * 4; 一样
    printf("%d\n", b); // 480
    b = b / 4; // 120
    b /= 4; // 这种方式就和b = b / 4; 一样
    printf("%d\n", b); // 30

    // 5. 单目操作符 - 只有一个操作数的操作符
    /*
        ! 逻辑反操作
        - 负值
        + 正值
        sizeof 操作数的类型长度（以字节为单位）
        -- 前置、后值--
        ++ 前置、后置++
        (类型) 强制类型转换
        & 取地址
        ~ 对一个数的二进制按位取反
        * 间接访问操作符（解引用操作符）
    */
    // C 语言中，0 表示假，非0 表示真
    int flag = 0;
    if (!flag)
    {
        printf("条件成立，我已输出！\n");
    }

    int n_um1 = 20;
    int n_um2 = -n_um1;
    printf("%d\n", n_um2); // -20
    printf("%d\n", +n_um2); // -20
    int n_um3 = -n_um2;
    printf("%d\n", +n_um3); // 20

    // sizeof 并不是一个函数 而是一个单目操作符 用于获取操作数的大小（字节）
    int szf1 = 20;
    printf("%lu\n", sizeof szf1); // 4
    printf("%lu\n", sizeof(int)); // 4
    int szf2[10] = {0};
    printf("%lu\n", sizeof szf2); // 40
    printf("%lu\n", sizeof szf2[0]); // 4
    printf("%lu\n",sizeof szf2 / sizeof szf2[0]); // 10 （使用数组的大小 / 数组中的单个成员的大小 = 数组中一共含有多少个成员）


    int nu_m1 = 10;
    // ++ 或者 -- 在前，先对变量进行操作，再进行具体的使用
    int nu_m2 = --nu_m1;
    // int nu_m2 = (nu_m1 - 1)
    printf("%d\n", nu_m2); // 9
    printf("%d\n", nu_m1); // 9

    // ++ 或者 -- 在后，先进行具体的使用，再对变量进行操作
    int nu_m3 = nu_m2++;
    // int nu_m3 = nu_m2;
    // nu_m2 = nu_m2 + 1;
    printf("%d\n", nu_m2); // 10
    printf("%d\n", nu_m3); // 9

    int pi = 3.14; // err （编译器会提示你将double 类型转变成了 int）
    // 3.14 字面浮点数，编译器默认理解为 double 类型
    // 上面的这种情况有些编译器或者情况下可以运行代码 是因为进行了”隐式转换“

    int fz = (int)3.14; // 将 3.14 进行强制类型转换，变味了 int 类型
    printf("%d\n", fz); // 3

    // 6. 关系操作符
    /*
        >
        >=
        <
        <=
        != 用于测试 ”不相等“
        == 用于测试 ”相等“
    */
    int signed1 = 10;
    if (signed1 == 10)
    {
        printf("signed1等于%d\n", signed1);
    }
    if (signed1 >= 10)
    {
        printf("signed1大于等于%d\n", signed1);
    }

    int signed2 = 20;
    int signed3 = signed2 >= 20;
    int signed4 = signed2 < 20;
    printf("signed3 = %d\n", signed3);
    printf("signed4 = %d\n", signed4);

    // 7. 逻辑操作符
    /*
        && 逻辑与 - 并且
        || 逻辑或 - 或者
    */
    int cd1 = 20;
    int cd2 = 30;
    int cd3 = 0;
    int cd4 = 0;
    if (cd1 && cd2)
    {
        printf("条件成立\n");
    }
    if (cd1 && cd3)
    {
        printf("条件成立"); // 这里不会输出因为条件不成立
    }
    if (cd1 || cd2)
    {
        printf("条件成立\n");
    }
    if (cd1 || cd3)
    {
        printf("条件成立\n");
    }
    if (cd3 || cd4)
    {
        printf("条件成立"); // 这里不会输出因为条件不成立
    }
    // 8. 条件操作符（三目操作符）
    // exp1 ? exp2 : exp3
    int nb1 = 20;
    int nb2 = 30;
    int largeNb = nb1 > nb2 ? nb1 : nb2;
    printf("%d\n", largeNb);

    // 9. 逗号表达式
    // exp1,exp2,exp3,epx4,...epxN
    // 逗号表达式就是逗号隔开的一串表达式
    // 逗号表达式的特点：从左到右依次计算，整个表达式的结果是最后一个表达式的结果
    int addNumber1 = 20;
    int addNumber2 = 30;
    int addNumber3 = 40;
    int endNumber1 = (addNumber1 = addNumber2 - addNumber1,addNumber2 = addNumber3 + addNumber1,addNumber1 + addNumber2 + addNumber3);

    printf("%d\n", endNumber1);

    // 10. 下标引用、函数调用、结构成员
    int a_rr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arrLength = sizeof(a_rr1);
    a_rr1[arrLength - 1] = 0; // [] 就是下标引用操作符，他得操作数有2个，一个是a_rr1（数组本身），一个是 arrLength - 1（下标）

    int number1 = 20;
    int number2 = 30;
    int largeNumber = getMaxNumber(number1, number2);
    // () 就是函数调用操作符，他的操作符有2类，一类是getMaxNumber（函数名），一类是number1, number2（参数）
    printf("%d\n", largeNumber);

    return 0;
}
