#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l = 0, m = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[m])
		m++;

	if (n < m)
		s = malloc(sizeof(char) * (l + n + 1));
	else
		s = malloc(sizeof(char) * (l + m + 1));

	if (!s)
		return (NULL);

	while (i < l)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < m && i < (l + n))
		s[i++] = s2[j++];

	while (n >= m && i < (l + m))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
