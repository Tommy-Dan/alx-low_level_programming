#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: string input
 * @needle: string input
 * Return: Return 0 (success)
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *n = needle;

		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
