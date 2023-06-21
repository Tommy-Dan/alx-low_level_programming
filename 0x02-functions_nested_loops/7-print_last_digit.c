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
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
