#include "main.h"


/**
 * _memcpy - copies n bytes from memory block
 * @dest: char destination address
 * @src: char source address
 * @n: the byte in int
 * Return: Return (dest)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
