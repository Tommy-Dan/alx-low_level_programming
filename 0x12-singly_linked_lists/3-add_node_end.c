#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_p;
	list_t *inspec = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_p = malloc(sizeof(list_t));
	if (!new_p)
		return (NULL);

	new_p->str = strdup(str);
	new_p->len = length;
	new_p->next = NULL;

	if (*head == NULL)
	{
		*head = new_p;
		return (new_p);
	}

	while (inspec->next)
		inspec = inspec->next;

	inspec->next = new_p;

	return (new_p);
}
