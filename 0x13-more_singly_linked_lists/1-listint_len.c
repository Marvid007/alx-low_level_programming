#include "lists.h"
#include <stdio.h>

/**
 * listint_len Returns the number of elements
 *             in a linked listint_t list.
 * @h: linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
