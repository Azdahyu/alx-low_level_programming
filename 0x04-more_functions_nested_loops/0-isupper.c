#include "main.h"

/**
 * _isupper - this function checks for uppercase characters
 * @c: the character being checked
 * Return: 1 on success, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
