#include "main.h"
/**
 * alloc_grid - allocates a grid, makes space and frees space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed space
 */

int **alloc_grid(int width, int height)
{
	/*Declaring variables*/
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height); /*malloc*/

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
			free(grid[i]);
			}
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		grid[i][j] = 0;
	return (grid);
}

