#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that gives freedom to 2 dimensional grid.
 * @grid: array of multidimensional integer.
 *
 * @height: grid height.
 *
 * Return: no return.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
