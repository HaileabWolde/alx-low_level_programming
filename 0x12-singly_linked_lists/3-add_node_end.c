#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to pointer
 * @str: character string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;

		newnode->str = strdup(str);

		newnode->next = NULL;

		newnode->len = strlen(str);

		if (*head == NULL)
			return (NULL);

		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;
	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	if (newnode->str == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);
	return (*head);
}
