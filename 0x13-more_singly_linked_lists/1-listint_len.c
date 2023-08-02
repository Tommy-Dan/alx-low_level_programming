#include "main.h"


/**
 * listint_len - prints the number of elements in a linked list
 * @h: the linked list to traverse
 * Return: Return the number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
