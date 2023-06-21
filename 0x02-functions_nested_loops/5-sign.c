#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The n is check
 * Return: Return (1) and print + (0) and print 0 (-1) print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
