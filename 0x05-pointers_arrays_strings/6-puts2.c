#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints string
 * @str: input string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
