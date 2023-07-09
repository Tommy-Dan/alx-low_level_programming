#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: string to print
 * Return: Return str
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\0');
}
