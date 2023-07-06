#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer pointing to address
 *
 * Return: Return (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
