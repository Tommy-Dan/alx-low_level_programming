#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 * Return: Return (1) if c is a letter and (0) if it's not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
