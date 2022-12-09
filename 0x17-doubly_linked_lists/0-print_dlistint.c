#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint  - print number of nodes
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;

	size_t t;

	t = 0;

	temp = h;

	if (temp == NULL)
		return (t);

	while (temp->prev != NULL)
		temp = h->prev;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		t++;
		temp = temp->next;
	}

	return (t);
}
