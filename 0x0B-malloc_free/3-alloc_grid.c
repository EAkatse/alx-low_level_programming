#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array of integers and initializes it to 0.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: pointer to the allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(grid[w]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
