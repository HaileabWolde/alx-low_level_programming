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

	t = 1;

	temp = h;

	if (temp != NULL)
	{
		t += 1;

		temp = temp->next;
	}

	return (t);
}
