#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
*
* @head: Double pointer to the list_t list.
* @str: New string to add in the node.
*
* Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[len])
		++len;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
