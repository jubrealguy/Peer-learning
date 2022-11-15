#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = NULL;
	dlistint_t *tmp2 = NULL;
	unsigned int i = 0;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->n = n;
	tmp = *h;
	tmp2 = *h;

	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		count++;
	}
	if (idx > count || idx < i) 
	{
		return (NULL);
	}
	while (tmp != NULL && i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	new_node->prev = tmp;
	tmp->next = new_node;

	return (new_node);
}
	
	
