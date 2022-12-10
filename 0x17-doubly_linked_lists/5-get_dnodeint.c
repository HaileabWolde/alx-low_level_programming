#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: a pointer to the start
 * @index: a positve integer
 *
 * Return: a pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int i;

	temp = head;

	i = 0;

	if (temp == NULL)
	{
		return (NULL);
	}

	while (i < index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
