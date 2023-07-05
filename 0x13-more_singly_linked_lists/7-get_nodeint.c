#include "lists.h"

/**
 * get_nodeint_at_index -It returns the nth node of a linked list
 * @head: param list head
 * @index: parameter.
 * Return: nth node of a function.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

