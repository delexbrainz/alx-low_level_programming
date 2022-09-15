#include "main.h"

/**
 * print_sign - check if number is positive or negative
 * @n: input to be checked
 *
 * Return : 1 if positive, 0 if input is zero, negative if negative
 */
int print_sign(int n)
{
	int i;
	
	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
