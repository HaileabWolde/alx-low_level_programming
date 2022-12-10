#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	if (h == NULL)
	{
		return (n);
	}

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
