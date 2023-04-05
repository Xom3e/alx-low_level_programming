#include <stdio.h>

/**
 * sum_listint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the linked list.
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
