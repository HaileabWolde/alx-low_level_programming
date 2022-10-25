#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delets the head node
 *
 * @head: pointer to pointer
 *
 * Return: n if true if not false
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = (*head);

	if (*head == NULL)
		return (0);

	else
	{
		(*head) = (*head)->next;/*temp holds the data of head*/ 
	}

	free (temp);

	return ((*head)->n);
}
