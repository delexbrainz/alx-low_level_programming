#include "main.h"

/**
 * swap_int -swaps values of a and b
 * @a: input
 * @b: input
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;


	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
