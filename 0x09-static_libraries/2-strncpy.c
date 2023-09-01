#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of strings being considered
 * Return: returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

