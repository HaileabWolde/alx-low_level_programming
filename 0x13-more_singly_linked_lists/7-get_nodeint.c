#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - retunrs the nth node
 * @head: a head pointer
 * @index: an unisgned int
 *
 * Return: a pointer if true if not null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i += 1;
	}

	return (temp);
}
