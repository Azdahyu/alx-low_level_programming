#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
		_putchar(str[t]);
	_putchar('\n');
}
