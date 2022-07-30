#include "main.h"

/**
 * free_grid - free the two dimensional array
 * previously created by your alloc_grid function
 *
 * @grid: pointer to a 2D array
 * @height: height of an array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
