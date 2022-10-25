#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: a pointer to a pointer
 * @index: unsigned int
 * 
 * Return: 1 if true else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	listint_t *new;

	unsigned int i;

	i = 0;

	if (*head == NULL)
		return (-1);

	temp = (*head);

	if (temp != NULL)
	{
		for (i = 0; i < index; i++)
		{
			new = temp;
			temp = temp->next;
		}

		new->next = temp->next;

		temp->next = NULL;

		free (temp);

		return (1);
	}
	else
	{
		return (-1);
	}
}
