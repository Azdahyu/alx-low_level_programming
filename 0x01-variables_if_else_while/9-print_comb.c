#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: this is always 0
 */

int main(void)
{
	int t;

	for (t = 0 ; t < 10 ; t++)
	{
		putchar(t + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
