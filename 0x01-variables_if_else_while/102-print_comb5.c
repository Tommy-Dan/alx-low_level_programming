#include<stdio.h>

/**
 * main - Entry point
 * Description: print all possible combinations of two digit numbers
 * Return: Return (0)
 */

int main(void)
{
	int i;
	int x;

	for (i = 0; i < 100; i++)
	{
		for (x = 0; x < 100; x++)
		{
			if (i < x)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (i != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
