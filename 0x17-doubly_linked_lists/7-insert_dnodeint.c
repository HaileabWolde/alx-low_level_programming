#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a specfic position
 *
 * @h: pointer to pointer
 * @idx: unsigned int
 * @n: integer
 *
 * Return: a poiner
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	dlistint_t *pre;

	unsigned int i;

	temp = malloc(sizeof(dlistint_t));

	i = 0;

	if (temp == NULL)
	{
		return (NULL);
	}

	if (*h == NULL)
	{
		*h = temp;
		temp->next = NULL;
		temp->prev = NULL;
		temp->n = n;
	}
	else
	{
		pre = *h;

		if (i > idx)
		{
			return (NULL);
		}

		while (i < (idx - 1))
		{
			i++;
			pre = pre->next;
		}
		pre->next->prev = temp;
		temp->next = pre->next;
		temp->prev = pre;
		pre->next = temp;
		temp->n = n;
	}
	return (temp);
}
