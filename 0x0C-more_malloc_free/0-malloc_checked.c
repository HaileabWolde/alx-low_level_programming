#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: 0 if false if true pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(sizeof(unsigned int) * b);

	if (c == NULL)
		exit(98);

	return (c);
}
