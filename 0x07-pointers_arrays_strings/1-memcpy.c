#include "main.h"

/**
 * _memcpy - this function copies n bytes
 * from memory area src to memory area dest
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes to be copied
 * Return: returns destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j = 0;

	for (; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
