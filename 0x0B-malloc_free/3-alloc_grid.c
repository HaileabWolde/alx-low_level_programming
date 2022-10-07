#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - it returns a pointer to 2 dimenstional
 * @width: integer width
 * @height: integer height
 *
 * Return:NULL if falls, if ture pointer
 */

int **alloc_grid(int width, int height)
{
	int w, h;

	int **n;

	if (width <= 0 || height <= 0)

		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
	{
		return (NULL);
		free(n);
	}

	for (w = 0; w < height; ++w)
	{
		n[w] = malloc(sizeof(int) * width);

		if (n[w] == NULL)
		{
			for (h = 0; h < w; h++)
			{
				free(n[h]);
			}
			free(n);

		for (h = 0; h < width; ++h)
		{
			n[w][h] = 0;
		}

	}
	}

	return (n);
}
