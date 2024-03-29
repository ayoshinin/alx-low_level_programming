#include "lists.h"
/**
 * add_node - The adds new node
 * @head: parameter
 * @str: str parameter
 * Return: structure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_item;
	size_t len;

	n_item = malloc(sizeof(list_t));
	if (n_item == NULL)
		return (NULL);

	n_item->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	n_item->len = len;
	n_item->next = *head;
	*head = n_item;

	return (*head);
}
