#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of linked list
 * @head: list head parameter.
 * @n: parameter
 * Return: The address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
