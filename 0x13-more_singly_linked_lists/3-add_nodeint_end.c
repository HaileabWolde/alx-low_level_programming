#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head: pointer to a pointer
 * @n: const int
 *
 * Return: a pointer if ture if not NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	listint_t *new;

	new = malloc(sizeof(listint_t));

	temp = *head;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->next = NULL;

	new->n = n;

	return (*head);
}
