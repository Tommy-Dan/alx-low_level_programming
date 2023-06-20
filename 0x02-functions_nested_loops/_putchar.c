#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: Return (1) as success
 * On error, return -1 and erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
