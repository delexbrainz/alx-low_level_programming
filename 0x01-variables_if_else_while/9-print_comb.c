#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int numb;

	numb = 0;
	while (numb <= 9)
	{
		putchar(numb + '0');
		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb++
	}
	putchar('\n');
	return (0);
}
