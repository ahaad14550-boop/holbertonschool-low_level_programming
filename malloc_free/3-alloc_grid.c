#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, NULL on failure or if width/height <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* 1. Allocate the "rows" (array of pointers to int) */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* 2. Allocate each individual row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		/* If a row allocation fails, we must free everything allocated so far */
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		/* 3. Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
