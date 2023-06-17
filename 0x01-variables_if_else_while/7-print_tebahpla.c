#include<stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet in reverse form
 * Return: Return (0)
 */

int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
