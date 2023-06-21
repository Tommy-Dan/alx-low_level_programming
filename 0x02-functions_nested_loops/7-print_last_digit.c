#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last number from
 * Return: Return the last value
 */

int print_last_digit(int n)
{
	int i;
	i = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	else if (i < 0)
	{
		i = -i;
		_putchar(i + '0');
	}
	else
	{
		return (i);
	}
	return (0);
}
