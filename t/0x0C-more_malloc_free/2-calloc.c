#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - returns a pointer to the allocated memory
 *
 * @nmemb: The number of element in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memor or NULL on faillure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
