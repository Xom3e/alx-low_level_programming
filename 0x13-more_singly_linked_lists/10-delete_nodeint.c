#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the given index of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *prev;
	unsigned int i = 0;
	if (*head == NULL)
	return (-1);

	if (index == 0)
{
	current = *head;
		*head = (*head)->next;
		free(current);
		return 1;
	}
	while (i < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

return (1);
}
