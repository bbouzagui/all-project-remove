#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block with a new size
 * @ptr: Pointer to the previously allocated memory
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: A pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *index, *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		index = malloc(new_size);

		if (index == NULL)
			return (NULL);

		return (index);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	index = malloc(sizeof(*p) * new_size);

	if (index == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < old_size && a < new_size; a++)
		index[a] = p[a];


	free(p);
	return (index);
}
