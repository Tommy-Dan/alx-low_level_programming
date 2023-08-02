#include "lists.h"



/**
 * add_nodeint - add new node to the linked list
 * @head: pointer point to the first node
 * @n: the insert data
 *
 * Return: Return pointer to new node else NULL;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	while (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
