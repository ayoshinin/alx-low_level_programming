#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- grid of 2d using malloc.
 * Description:  element of the grid should be initialized to 0.
 * @width:  size of integer width.
 * @height:  size height
 * Return: new grid pointer.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int j, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (j--; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}

	return (grid);
}
