#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}

	return (counter);
}

