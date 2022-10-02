#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments it recieves
 * @argc: counts the number of argumetns
 * @argv: pointer of an array
 *
 * Return: always zero(if success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
