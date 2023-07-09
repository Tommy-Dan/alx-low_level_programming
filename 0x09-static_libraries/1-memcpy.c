#include "main.h"

/**
 * _memcpy - function that copyies memory area
 * @dest: destination memory store
 * @src: source memory to copy
 * @n: number of bytes
 *
 * Return: Return copied memory with the n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (i = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
