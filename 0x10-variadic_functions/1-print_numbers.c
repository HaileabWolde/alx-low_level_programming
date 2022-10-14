#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - it prints numbers
 * @separator : pointer of separator
 * @n: const unsigned int
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(ap, int));

		if (separator && i != n - 1)
			printf("%s ", separator);
	}
	va_end(ap);
	printf("\n");
}
