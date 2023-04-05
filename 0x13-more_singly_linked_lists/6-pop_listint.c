#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int fig = 0;
	listint_t *temp;

	if (!head || !*head)
	return (0);

	fig = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (fig);
}


