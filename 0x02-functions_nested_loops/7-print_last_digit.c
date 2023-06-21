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
	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
