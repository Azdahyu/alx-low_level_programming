#include "main.h"

/**
 * more_numbers - this function prints 10 times the numbers, from 0 to 14
 * Return: no value
 */
void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	for (i = 0; i <= 14; i++)
	{
		while (j <= 10)
			j++;
		_putchar('\n');
	}
		_putchar(i + '0');
}
