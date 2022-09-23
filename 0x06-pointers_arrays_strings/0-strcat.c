#include "main.h"

/**
 * _strcat - concatenates string
 * @src: string to be append
 * @dest: destination appen
 *
 * Return: the point
 */
char *_strcat(char *dest, char *src)
{
	char *d;

	if (*src != '\0')
	{
		d = dest;
		while (*dest != '\0')
		{
			dest++;
		}
		while(*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	return (d);
}
