#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * @h: structure pointer
 *
 * Return: unsigned int
 */

size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		return (0);

	while (h->next != NULL)
	{
		i += 1;

		h = h->next;
	}

	return (i);
}
