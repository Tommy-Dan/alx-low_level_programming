#include<stdio.h>
/**
 * main -Entry point
 * Description: 'Program that prints the alphabet in lowercase'
 * Return: Return (0)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
