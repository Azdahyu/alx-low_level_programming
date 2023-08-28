#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	int t;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		t = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = t;
	}
}
