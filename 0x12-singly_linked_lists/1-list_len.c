#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: Node
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			len++;
		}
		h = h->next;
	}
	return (len);
}
