#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: integer argument
 * Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
