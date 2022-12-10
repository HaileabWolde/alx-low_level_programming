#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - sum of nodes
 *
 * @head: a pointer to the beginning
 *
 * Return: integer
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	int sum;

	temp = head;

	sum = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
