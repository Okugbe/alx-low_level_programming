#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	/* Free dynamically allocated data and break loops */
	while (*h)
	{
		current = *h;
		*h = (*h)->next;
		len++;

		if (current->next >= current)
		{
			current->next = NULL;
			break;
		}

		free(current);
	}

	/* Free remaining nodes */
	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		len++;
		free(temp);
	}

	return (len);
}
