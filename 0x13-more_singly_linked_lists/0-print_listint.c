#include "lists.h"


/**
 * print_listint - print all the elements of a linked list
 * @h: linked list to point to
 * Return: Return number of nodea
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
