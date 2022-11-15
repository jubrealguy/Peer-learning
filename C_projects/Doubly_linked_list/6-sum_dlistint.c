#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
	{
		return (1);
	}
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
