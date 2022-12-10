#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 *
 * @head: a pointer to the head
 * @n: a constant integer
 *
 * Return: a pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	else if (*head == NULL)
	{
		*(head) = temp;
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		return (temp);
	}

	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		temp->prev = NULL;
		temp->n = n;
		*head = temp;
	}
	return (temp);
}
