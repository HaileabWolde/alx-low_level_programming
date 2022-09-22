#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer n
 *
 * Description: addes two strings with limit of n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); ++i)
		*(dest + i) = *(dest + i);
	for (j = 0; j < n; ++j)
	{
		*(dest + i) = *(src + j);
		++i;
	}
	return (dest);
}
