#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -Determine number is positive,
 * negitive or equl zero.
 * Return: Always 0 (Success).
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%f is positive\n", n);
}
else if (n == 0)
{
printf("%f is zero\n", n);
}
else
{
printf("%f is negative\n", n);
}
return (0);
}
