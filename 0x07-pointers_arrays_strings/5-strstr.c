#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *c = haystack;
		char *i = needle;

		while (*c == *i && *i != '\0')
		{
			c++;
			i++;
		}
		if (*i == '\0')
			return (haystack);
	}
	return (0);
}
