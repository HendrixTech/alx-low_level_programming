#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		h = h->next;
	}
	return (len);
}

