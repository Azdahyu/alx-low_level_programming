#include "main.h"

/**
 * print_square - this function prints a square
 * @size: function parameter
 * Return: no value
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
