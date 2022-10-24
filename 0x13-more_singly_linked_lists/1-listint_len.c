#include <stdio.h>
#include "lists.h"
/**
 * listint_len - reutnrs the number of elemnets
 * @h: sturcutre pointer
 *
 * Return: unsigned int
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	const listint_t *temp;

	i = 1;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (0);

	temp = h;

	while (temp->next != NULL)
	{
		temp = temp->next;
		i += 1;
	}
	return (i);
}
