#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - Creates an array of integers
 * @min: The first array
 * @max: The second array
 *
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int num, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < size; num++)
	{
		ptr[num] = min + num;
	}

	return (ptr);
}
