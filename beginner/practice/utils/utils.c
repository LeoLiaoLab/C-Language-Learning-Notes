/**
 * @file utils.c
 * @author leoliao
 * @date 2026年6月25日 星期四
 * @brief 一些外部使用的函数
 */

/**
 * 判断一个整数是否为奇数
 *
 * @param num 一个整数
 * @return 1 表示奇数，0 表示偶数
 */
int isOdd(int num)
{
    return num % 2 != 0;
}