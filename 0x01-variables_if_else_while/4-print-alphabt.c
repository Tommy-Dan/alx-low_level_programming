#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
