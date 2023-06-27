#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int strlength = 0;
	int i;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}
	s--;
	for (i = strlength; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
