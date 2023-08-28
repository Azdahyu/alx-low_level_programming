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
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (i = 0 ; i < n ; i++)
			s[i] = b;
	}
	return (s);
}
