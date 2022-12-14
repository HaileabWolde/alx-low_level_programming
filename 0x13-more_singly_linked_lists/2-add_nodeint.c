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

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->next = NULL;
	}
	else

		new->next = *head;

	*head = new;

	new->n = n;

	return (*head);

}
