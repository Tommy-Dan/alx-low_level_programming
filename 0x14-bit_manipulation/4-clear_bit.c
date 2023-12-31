#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: Return 1 if successful, -1 if failure
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


