#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dim array of integers.
 * @width: The width
 * @height: The height
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twoD[x] = malloc(sizeof(int) * width);

		if (twoD[x] == NULL)
		{
			for (; x >= 0; x--)
				free(twoD[x]);

			free(twoD);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			twoD[x][y] = 0;
	}

	return (twoD);
}
