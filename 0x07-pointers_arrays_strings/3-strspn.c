#include "main.h"

/**
 * _strspn - this function gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 * Return: returns t
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				t++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (t);
		}
		s++;
	}
	return (t);
}
