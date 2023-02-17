#include <stdio.h>


/**
 *  main - Prints the size of of various types on
 *  the computer it is compiled and run on..
 *  Return: Always 0.
 */

int main(void)

{
	printf("Size of char: 5zu byte(s)\n" , sizedof(char));

	printf("Size of char: 5zu byte(s)\n" , sizedof(int));
	printf("Size of a long long int: %zu byte(s)\n" , sizedof(long int));
	printf("Size of a long long int: %zu byte(s)\n" , sizedof(long long int));
	printf("Size of a float %zu byte(s)\n", sizeof(float));
	return(0);
}
