#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: First input
 * @src: Second input
 * @n: Maximum number of characters to copy from src
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)

{
	int y;

	y = 0;

	while (src[y] != '\0' && y < n)
	{
		dest[y] = src[y];
		y++;
	}

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
