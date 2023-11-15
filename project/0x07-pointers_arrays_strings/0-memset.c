#include "main.h"

/**
 * *_memset - That fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory with
 * @n: Number of bytes to be filled
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		s[v] = b;
		v++;
	}

	return (s);
}
