#include "main.h"
/**
 * print_alphabet -print a-z
 *
 * Return:0
 */
void print_alphabet(void)
{
	char alph;
	while (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

