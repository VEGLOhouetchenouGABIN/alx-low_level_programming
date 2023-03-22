#include "main.h"
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int i, digits = 1;
    unsigned long int prev2 = 1, prev1 = 2, current = 3, sum = 2;
    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');
    _putchar(',');
    _putchar(' ');
    for (i = 3; i <= 98; i++)
    {
        if (digits == 19)
        {
            _putchar('\n');
            digits = 0;
        }
        if (i == 98)
        {
            printf("%lu\n", current);
        }
        else
        {
            printf("%lu, ", current);
        }
        prev2 = prev1;
        prev1 = current;
        current = prev1 + prev2;
        if (current % 2 == 0)
        {
            sum += current;
        }
        digits++;
    }
    printf("Sum: %lu\n", sum);
    return (0);
}
