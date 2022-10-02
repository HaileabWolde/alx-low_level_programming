#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of arguments
 * @argc: it counts the number of arguments
 * @argv: it is pointer of an array
 *
 * Return: if true 0, if not 1
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}

	return (0);
}
