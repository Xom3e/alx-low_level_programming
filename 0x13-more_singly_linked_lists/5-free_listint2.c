#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}

	*head = NULL;
}
