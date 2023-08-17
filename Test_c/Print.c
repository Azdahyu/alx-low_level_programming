#include <stdio.h>

int some_function(void)
{
	int i;

	i = 9;
	while (--i)
	{
		printf("%d", i);
	}
	return(0);
}

void main(void)
{
	some_function();
}
