#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -print the last digit of the number.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("The last digit of %d is", last_digit);
if (last_digit > 5)
{
printf("%d is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d is zero\n", last_digit);
}
else
{
printf("%d is less than 6 and not 0\n", last_digit);
}
return (0);
}
