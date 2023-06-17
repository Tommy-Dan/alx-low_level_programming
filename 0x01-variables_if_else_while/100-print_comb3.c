#include<stdio.h>

/**
 * main - Entry point
 * Description: print all possible different combinations of two digits
 * Return: Return (0)
 */

int main(void)
{
	int x;
	int n;

	for (i = 48; x <= 56; x++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > x)
			{
				putchar(x);
				putchar(n);
				if (x != 56 || n != 57)
				{
					putchar(' ');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

