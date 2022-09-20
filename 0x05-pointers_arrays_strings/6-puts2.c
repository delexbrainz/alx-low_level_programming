#include "main.h"

/**
 * puts2 - prints string
 * @str: input string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; 1 <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
