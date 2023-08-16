#include "main.h"

/**
 * print_last_digit - this function prints the last digit of a number
 * @i: the function parameter
 * Return: returns the value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
