#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all of the elements
 * @h : structure pointer
 *
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	size_t i, count;

	const list_t *p = NULL;

	count = 0;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)");

	p = h;

	for (i = 0; i < h->len; i++)
		;

	printf("[%lu] %s\n", i, h->str);

	for (i = 0; i < h->len; i++)
		;
	printf("[%lu] %s\n", i, h->next->str);

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);

}
