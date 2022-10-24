#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: struture pointer
 *
 * Return: unsigned int
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	const listint_t *temp;

	i = 1;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (0);

	printf("%d\n", h->n);
	printf("%d\n", h->next->n);

	temp = h;

	if (temp->next != NULL)
	{
		temp = temp->next;
		i += 1;
	}
	return (i);
}
