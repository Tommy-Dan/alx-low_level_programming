#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum0, sum1, y;

	sum0 = 0;
	sum1 = 0;

	for (y = 0; y < size; y++)
	{
		sum0 = sum0 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum1 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
