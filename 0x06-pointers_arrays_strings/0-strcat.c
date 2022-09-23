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
	char @temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
