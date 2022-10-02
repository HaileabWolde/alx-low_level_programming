#include <stdio.h>
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: ounts the number of arguments passed on
 * @argv: a pointer which holds a string
 *
 * Return: Always zero(if success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, n;

	n = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; ++i)
			n++;
		printf("%d\n", n);
	}
	return (0);
}
