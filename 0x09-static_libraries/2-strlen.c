#include "main.h"

/**
 * _strlen - this function prints the length of a string
 * @s: the string being considered
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
