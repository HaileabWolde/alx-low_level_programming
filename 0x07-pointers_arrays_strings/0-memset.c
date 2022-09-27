#include "main.h"

/**
 * _memset - copies with a constant byte
 * @s: a pointer holdig address
 * @b: a data type
 * @n: unsigned int n
 * Description: this fuction will copy char b to *s from line n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(s + i) = b;
	}
	return (s);
}
