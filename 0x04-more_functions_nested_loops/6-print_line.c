#include "main.h"

/**
 * print_line - this function draws a straight line on the terminal
 * @n: function parameter
 * Return: no value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n >= 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
