#include "main.h"

/**
 * reverse_array - reversing
 * @a: pointer a
 * @n: integer
 *
 * Description: it reverse the content of an array of integers
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
		;
	while (i >= 0)
	{
		printf("%d", *(a + i));
		printf(", ");
		--i;
	}
}
