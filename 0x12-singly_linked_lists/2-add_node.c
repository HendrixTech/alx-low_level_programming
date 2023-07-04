#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to a node
 * @str: String
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	newStr = strdup(str);
	if (newStr == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->len = strlen(newStr);
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
