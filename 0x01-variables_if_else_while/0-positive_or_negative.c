#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: this is always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is positive\n", n);
	printf("%d is zero\n", n);
	printf("%d is negative\n", n);
	return (0);
}
