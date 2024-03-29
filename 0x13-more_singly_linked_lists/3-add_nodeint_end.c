#include "lists.h"

/**
 * add_nodeint_end - Adds a new node containing a given integer value to the end
 *                   of a singly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to insert in the new node.
 *
 * Return: If the function succeeds, it returns a pointer to the new node;
 *         otherwise, it returns NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

