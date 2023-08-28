#include "main.h"

/**
 * _memset - this function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: a pointer to char b
 * @b: constant character
 * @n: number of bytes filled with character b
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	*s = b;
	i = 0;
	for (;n > 0;i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
