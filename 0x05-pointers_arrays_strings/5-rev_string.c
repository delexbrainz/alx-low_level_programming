#include "main .h"

/**
 * rev_string - print string in reverse
 * @s: string to be reversed
 *
 * Return void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char bck;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		bck = s[i];
		s[i++ = s[len];
		s[len] = bck;
	}
}
