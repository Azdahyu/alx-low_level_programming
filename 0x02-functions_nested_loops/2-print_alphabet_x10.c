#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabets in lower case.
 * Return: the function has no return value
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
