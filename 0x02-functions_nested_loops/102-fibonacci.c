#include <stdio.h>
/**
 * main function
 * count fibonacci
 *
 */
int main(void)
{
int i, count = 50;
long int fib1 = 1, fib2 = 2, nextTerm;
printf("%ld, %ld", fib1, fib2);
for (i = 3; i <= count; i++)
{
nextTerm = (fib1 + fib2);
printf(", %ld", nextTerm);
fib1 = fib2;
fib2 = nextTerm;
}
printf("\n");
return 0;
}
