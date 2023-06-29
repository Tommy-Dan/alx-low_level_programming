#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int strlength = 0;
	int i = 0;
	char *n = str;
	int x;

	while (*n != '\0')
	{
		n++;
		strlength++;
	}
	i = strlength - 1;
	for (x = 0 ; x <= i; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar('\n');
}
