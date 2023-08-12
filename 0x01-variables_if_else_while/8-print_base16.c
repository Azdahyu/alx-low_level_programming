#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (a = 'A' ; a <= 'F' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
