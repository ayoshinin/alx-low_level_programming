#include "lists.h"

/**
 * sum_listint -It returns sum of data in linked list.
 * @head: param list head
 * Return: integer.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

