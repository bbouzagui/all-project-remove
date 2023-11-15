#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate
 * @b: A pointer to allocated
 *
 * Return: A pointer
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
