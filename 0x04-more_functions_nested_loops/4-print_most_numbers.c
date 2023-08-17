#include "main.h"

/**
 * print_most_numbers - this function prints the numbers from 0 to 9
 * Return: no value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i + '0');
		else
			return (0);
	}
	_putchar('\n');
}
