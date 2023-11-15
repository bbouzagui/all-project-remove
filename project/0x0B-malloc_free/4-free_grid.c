#include "main.h"
#include <stdlib.h>

/**
 * free_grid -frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int bdr;

	for (bdr = 0; bdr < height; bdr++)
	{
		free(grid[bdr]);
	}
	free(grid);
}

