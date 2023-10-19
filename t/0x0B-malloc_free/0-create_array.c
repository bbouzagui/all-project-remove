#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and initializes
 * it with a specific char
 * @size: Size of the array
 * @c: The character to initialize the array
 * Return: Pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int sum;

	if (size == 0)
		return (NULL);

	ch = (char *)malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	for (sum = 0; sum < size; sum++)
	{
		*(ch + sum) = c;
	}

	*(ch + size) = '\0';

	return (ch);
}
