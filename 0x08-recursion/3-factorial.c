#include "main.h"

/**
 * factorial - this function returns the factorial of a given number
 * @n: the number being considered
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
