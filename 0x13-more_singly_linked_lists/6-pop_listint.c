#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: Return data of the elment deleted else 0
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int el;

	if (!head || !*head)
		return (0);

	el = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (el);
}

