#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: Returns value of the bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	while (index > 63)
		return (-1);

	bitVal = (n >> index) & 1;

	return (bitVal);
}

