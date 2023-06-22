#include <stdio.h>

/**
 * main - Prints the fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	long int fn1;
	long int fn2;
	long int fn;
	long int afn;

	fn1 = 1;
	fn2 = 2;
	fn = afn = 0;

	while (fn <= 4000000)
	{
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
		if ((fn1 % 2) == 0)
		{
			afn += fn1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}

