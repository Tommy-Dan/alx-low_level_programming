#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int i;
	int n;
	int strlength;

	strlength = 0;

	for (i = 0; str[i] != '\0'; i++)
		strlength++;

	n = (strlength / 2);

	if ((strlength % 2) == 1)
		n = ((strlength + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
