#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: this is always 0
 */

int main(void)
{
	int f1 = 0;
	int f2;

	while (f1 <= 99)
	{
		f2 = f1;
		while (f2 <= 99)
		{
			if (f2 != f1)
			{
				putchar((f1 / 10) + 48);
				putchar((f2 % 10) + 48);
				putchar(' ');
				putchar((f2 / 10) + 48);
				putchar(' ');

				if (f1 != 98 || f2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f2++;
		}
		f1++;
	}
	putchar('\n');
	return (0);
}

