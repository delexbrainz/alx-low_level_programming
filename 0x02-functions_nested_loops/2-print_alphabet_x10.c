#include "main.h"

/**
 * print_alphabet_10 - print a-z ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i <= 9; i++)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
