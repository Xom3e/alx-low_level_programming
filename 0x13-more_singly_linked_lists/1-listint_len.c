#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list of type listint_t to traverse the new list
 * initialize num to 0
 *
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	num++;
	h = h->next;
	}

	return (num);
}
