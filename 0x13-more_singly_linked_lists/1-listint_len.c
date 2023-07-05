#include "lists.h"

/**
 * listint_len - It returns number of elemet in linked list
 * @h: parameter
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
