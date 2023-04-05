#include <stddef.h>

/**
 * sum_listint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the linked list.
 *
 * Return: data
 */

int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *temp = head;

	while (temp)
	{
	data += temp->n;
	temp = temp->next;
	}

	return (data);
}
