#include<stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabet without the letter q and e
 * Return: Return (0)
 */

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
