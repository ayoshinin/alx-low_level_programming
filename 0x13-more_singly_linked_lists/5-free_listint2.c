#include "lists.h"

/**
 * free_listint2 - A free linked list
 * @head: list head parameter.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *live;

	if (head != NULL)
	{
		live = *head;
		while ((temp = live) != NULL)
		{
			live = live->next;
			free(temp);
		}
		*head = NULL;
	}
}
