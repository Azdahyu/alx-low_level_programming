#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
