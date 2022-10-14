#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - it prints numbers
 * @separator : pointer of separator
 * @n: const unsigned int
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
	/*it will pull out the integer value from the undetremined parmater given to it */
	
		printf("%d", x);
		
		if ( separator != NULL && i != n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
