#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string addres that stores characters
 * @c: the character in the string
 * Return: Return the address string
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
