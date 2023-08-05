#include "main.h"

/**
 * get_endianness - checks if a machine
 * Return: 0 if big Endian, otherwise 1 little Endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

