/**
 * @file P03.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 请你阐述下方代码的执行过程，且告诉我m，n最后的值是多少
 */

#include <stdio.h>

int main(void)
{
    int n = 1;
    int m = 2;

    switch (n)
    {
        case 1: // 符合条件，执行
            m++; // m 3
        case 2: // 因为上个case没有break，继续执行
            n++; // n 2
        case 3: // 因为上个case没有break，继续执行
            switch (n)
            {
                case 1: // 这里并不会执行，因为不符合条件
                    n++;
                case 2:
                    m++; // m 4
                    n++; // n 3
                    break; // 跳出当前 switch
            }
        case 4: // 回到 case 4: 继续执行
            m++; // m 5
            break; // 跳出 switch
        default :
            break;
    }

    printf("m=%d\n",m); // 5
    printf("n=%d\n",n); // 3

    return 0;
}
