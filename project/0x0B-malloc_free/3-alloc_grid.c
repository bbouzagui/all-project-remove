#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to the allocated grid,
 * or NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	if (width <= 0 ||  height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		p[a] = (int *) malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			for (b = 0; b <= a; b++)
				free(p[b]);

			free(p);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
