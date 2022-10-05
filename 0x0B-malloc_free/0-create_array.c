#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer called size
 * @c: character c
 *
 * Description: it creates an array of chars using dynamic allocation by malloc
 * Return: NULL if size 0 or pointer N if true
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *n;

	n = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		if (n == NULL)
			return (NULL);

		for (i = 0; i < size; ++i)
			n[i] = c;

		return (n);
	}
}
