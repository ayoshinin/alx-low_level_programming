#include "lists.h"

/**
 * free_list -It helps to  frees list
 * @head: parameter.
 */

void free_list(list_t *head)
{
	list_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
