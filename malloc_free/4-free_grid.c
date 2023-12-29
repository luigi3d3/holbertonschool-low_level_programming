#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: receives a grid created before
 * @height: as a parameter
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
		}
		free(grid);
	}
}
