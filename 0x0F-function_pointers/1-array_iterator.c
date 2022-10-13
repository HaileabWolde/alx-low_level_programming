#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: pointer for an array
 * @size: data type of size_t
 * @action: pointer of function
 *
 * Return; nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
