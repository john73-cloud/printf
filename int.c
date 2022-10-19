#include <stdio.h>
/**
 * @pr_int - int
 * @n: int
 * Return: void
 */
void pr_int(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        pr_int(n / 10);
    putchar((n % 10) + '0');
}