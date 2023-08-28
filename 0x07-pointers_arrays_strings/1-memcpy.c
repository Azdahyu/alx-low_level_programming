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
	unsigned int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		for (j = 0 ; src[j] != '\0' ; j++)
		{
			while (j < n)
			{
				dest[i] = src[j];
				i++;
				j++;
			}
		}
	}
	return (dest);
}
