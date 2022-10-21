#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - returns the number of elements
 * @head : pointer to pointer
 * @str: pointer to char
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	if (*(head) == NULL)
	{
		*head = new;

		new->str = strdup(str);

		new->len = strlen(str);

		new->next = NULL;

		if (*head == NULL)
		{
			return (NULL);
		}
		return (*head);
	}

	new->next = *(head);

	*head = new;

	new->str = strdup(str);

	new->len = strlen(str);

	if (*head == NULL)
	{
		return (NULL);
	}
	return (*head);
}
