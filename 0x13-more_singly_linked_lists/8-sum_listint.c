#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: head pointer
 *
 * Return: int if true else 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
