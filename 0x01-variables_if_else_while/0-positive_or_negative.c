#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * Determine number is positive,
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
printf("%i is positive", n);
}
else if (n == 0)
{
printf("%i is zero", n);
}
else
{
printf("%i is negative", n);
}
return (0);
}
