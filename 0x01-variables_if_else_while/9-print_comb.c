#include<stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations of single digit numbers
 * Return: Return (0)
 */

int main(void)
{
	in i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 54)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
