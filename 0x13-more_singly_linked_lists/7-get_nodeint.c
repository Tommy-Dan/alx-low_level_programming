#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: the head node in the linked list
 * @index: index of the node to return
 * Return: Return a pointer to the node searched for else NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}

