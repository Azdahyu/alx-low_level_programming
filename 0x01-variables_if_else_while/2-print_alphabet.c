#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: this is always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}
