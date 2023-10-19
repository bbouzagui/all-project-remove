#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @str: string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
