#include "main.h"

/**
 * _strncat - concatenating two string
 * @dest: input destination string value
 * @src: input source string value
 * @n: input string size in bytes
 *
 * Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
