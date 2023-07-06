#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the inputted address
 * Return: Return (0)
 *
 */

int _strlen_recursion(char *s)
{
	while (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
