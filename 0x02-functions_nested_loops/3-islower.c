#include "main.h"

/**
 * _islower - a function that checks for lower case character
 * @c: the character that is being checked
 * Return: 1 if c is lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
