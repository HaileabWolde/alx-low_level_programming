#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: int memb
 * @size: unsigned int size
 *
 * Return: 0 if false true pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = malloc(size * nmemb);
	}
	return (p);
}
