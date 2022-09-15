#include <main.h>

/**
 * _islower -check input for lower case letters
 *
 * Return: 1 when c is lowercase and 0 is otherwise
 */
int _islower(int c)
{
	int a;
	if ((c >= 'a') && (c <= 'z'>))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
