#include "main.h"

/**
 * puts2 - this function prints even numbers of a string
 * @str: the string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
