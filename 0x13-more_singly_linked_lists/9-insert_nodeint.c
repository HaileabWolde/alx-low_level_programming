#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: a pointer to pointer
 * @idx: unsigned int
 * @n: int
 *
 * Return: a pointer if true else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;

	listint_t *new;

	listint_t *prev;

	unsigned int i;

	new = malloc(sizeof(listint_t));

	i = 0;

	if (*head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	temp = (*head);

	if (i >= idx)
		return (NULL);

	while (i < idx)
	{
		prev = temp;/*this holds the previous address*/
		temp = temp->next;
		i += 1;
	}

	new->next = prev->next;/*the new node holds addresse of the previous node*/

	prev->next = new;/*and the prev holds the address of the new*/

	new->n = n;

	return (new);
}
