#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *tmp2 = NULL;
	unsigned int count;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	tmp2 = *head;

	for (count = 0; tmp2 != NULL; count++)
	{
		tmp2 = tmp2->next;
	}
	if (index >= count || index < i)
	{
		return (-1);
	}
		
	while (tmp != NULL && i < index)
	{	
		tmp = tmp->next;
		i++;
	}
	if (index == 0)
	{
	       	(*head)->prev = NULL;
		*head = tmp->next;
	}
	else
	{	
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);

}
