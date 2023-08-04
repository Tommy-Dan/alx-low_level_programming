#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: Return the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decvalue = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decvalue = 2 * decvalue + (b[i] - '0');
		i++;
	}

	return (decvalue);
}
