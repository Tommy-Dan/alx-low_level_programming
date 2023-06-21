#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 * Return: Return result
 */

void times_table(void)
{
	int i;
	int n;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			j = n * i;
			if (n == 0)
			{
				_putchar(j + '0');
			}
			else if (j < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
