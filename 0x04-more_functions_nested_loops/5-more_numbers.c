#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int i,x;
	
	for (x = 0; x < 10; x++)
	{	
        for (i=0; i <= 14;i++)
	{
	if (i >= 9)
	{
	putchar((i / 10) + '0');
 	}
	putchar((i % 10) + '0');
	}
	putchar('\n');
	}
}

