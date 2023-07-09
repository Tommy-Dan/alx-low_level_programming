#include "main.h"

/**
 * _strncpy - coppy a string
 * @dest: destination input string
 * @src: source input string
 * @n: string size of n bytes
 *
 * Return: Return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
