#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given position.
* @head: Pointer to the head of the doubly linked list.
* @index: Index of the node to delete.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);

	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	free(current_node);

	return (1);
}
