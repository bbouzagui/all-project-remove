#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string to append to dest
 * @n: Number od bytes
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int o, i;

	o = 0;
	i = 0;

	while (dest[o] != '\0')
		o++;

	while (src[i] != '\0' && i < n)
	{
		dest[o] = src[i];
		o++;
		i++;
	}
	dest[o] = '\0';

	return (dest);
}
