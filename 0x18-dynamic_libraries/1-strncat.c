#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input a char value
 * @src: input a char value
 * @n: input an int n value
 * Return: Return (dest)
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
