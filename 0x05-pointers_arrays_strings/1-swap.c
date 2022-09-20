#include "main.h"

/**
 * swap_int - interchange the value of a and b
 *@a: first int to swap
 *@b: second int to be swap
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
