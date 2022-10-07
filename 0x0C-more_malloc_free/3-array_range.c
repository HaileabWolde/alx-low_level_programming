#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer min
 * @max: integer max
 *
 * Return: 0 if false pointer true
 */

int *array_range(int min, int max)
{
	int i;

	int len;

	int *p;

	if (min > max)
		return (NULL);
	len = 0;

	for (i = min; i <= max; i++)
		len++;

	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
