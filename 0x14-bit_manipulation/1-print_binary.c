#include "main.h"

/**
 * print_binary - prints the binary equivalent of the decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int cb;

	for (i = 63; i >= 0; i--)
	{
		cb = n >> i;

		if (cb & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
