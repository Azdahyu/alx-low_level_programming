#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: this is always 0
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
