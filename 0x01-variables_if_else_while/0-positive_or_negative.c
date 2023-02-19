#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
	/* your code goes there */
	return (0);
}