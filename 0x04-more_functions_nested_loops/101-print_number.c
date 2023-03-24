#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
int digit, sign = 1;
if (n < 0)
{
sign = -1;
n = -n;
}
if (n / 10)
{
print_number(sign * (n / 10));
}
digit = sign * (n % 10) + '0';
_putchar(digit);
}
