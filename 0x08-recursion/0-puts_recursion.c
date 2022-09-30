#include "main.h"

/**
 * _puts_recursion - recursion
 * @s: pointer s
 *
 * Description: it prints string in recursion
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
