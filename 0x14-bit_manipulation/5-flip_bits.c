#include "main.h"

/**
 * flip_bits - counts the number of bits to get from
 * @n: first number
 * @m: second number
 * Return: Returns the number of bits to change
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int cb;
	unsigned long int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cb = exor >> i;
		if (cb & 1)
			count++;
	}
	return (count);
}

