#include "main.h"

/**
 * _isdigit - this function checks for a digit between 0 to 9
 * @c: the digit being checked
 * Return: 1 on success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
