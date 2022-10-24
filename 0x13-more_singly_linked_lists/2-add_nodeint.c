#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to pointer
 * @n: const int
 *
 * Return: pointer if true else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (0);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (*head);
	}
	
	new->next = *head;

	*head = new;

	new->n = n;

	return (*head);
	
}
