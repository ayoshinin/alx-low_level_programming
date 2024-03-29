#include "lists.h"

/**
 * free_listint - frees a linked list integer.
 * @head: list head prameter.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
