#include "main.h"
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l, m, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l = _strlen(s1);
	m = _strlen(s2);
	len = l + m + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= l + m; i++)
		result[i] = 0;
	for (l = l - 1; l >= 0; l--)
	{
		digit1 = s1[l] - '0';
		carry = 0;
		for (m = _strlen(s2) - 1; m >= 0; m--)
		{
			digit2 = s2[m] - '0';
			carry += result[l + m + 1] + (digit1 * digit2);
			result[l + m + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l + m + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}