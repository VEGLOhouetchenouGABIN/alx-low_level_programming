#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
int temp;
for (temp = num; temp <= 9; temp++)
{
putchar(num + '0');
if (temp != num)
{
putchar(temp + '0');
}
if (num < 8 || temp < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
