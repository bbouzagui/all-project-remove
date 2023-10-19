#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string to append to dest
 * Return: Pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int o = 0;
	int i = 0;

	while (dest[o] != '\0')
	{
		o++;
	}

	while (src[i] != '\0')
	{
		dest[o] = src[i];
		o++;
		i++;
	}

	dest[o] = '\0';

	return (dest);
}
