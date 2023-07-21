#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array elements on a newline
 * @array: Array
 * @size: how many element to print
 * @action: pointer to print irregular or hex
 * Return: Return void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
