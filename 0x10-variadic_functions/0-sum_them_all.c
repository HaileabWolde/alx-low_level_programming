#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - competes the sum
 * @n: unsigned int n
 *
 * Return: 0 if false else int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;

	va_list args;/*this is pulling the var list for the undterminde para*/

	va_start(args, n);/*catch the last known value*/

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		/*this will pull out the int value from the passed value and put it on x*/

		sum += x;
	}

	va_end(args);

	return (sum);
}
