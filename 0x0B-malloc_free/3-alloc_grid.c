#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * alloc_grid - return a function to a 2D array of int
  *
  * @width: width of grid
  * @height: height of grid
  *
  * Return: Pointer to array, Null if failed
  */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * (sizeof(int *)));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * (sizeof(int)));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
