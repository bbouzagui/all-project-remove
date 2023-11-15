#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 *		 and initializes it with a specific char.
 *
 * @size: Integer of array to be print.
 * @c: Character to be print.
 * Return: Pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		*(str + index) = c;
	}

	*(str + size) = '\0';
	return (str);
}
