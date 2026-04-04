#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously 
 * created by alloc_grid function.
 * @grid: the 2D grid to be freed
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid exists */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Free each individual row first */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Free the array of pointers (the "grid" itself) */
	free(grid);
}
