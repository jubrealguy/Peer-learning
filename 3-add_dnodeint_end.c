#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = NULL;
	dlistint_t *tmp = NULL; 

	end_node = malloc(sizeof(dlistint_t));

	if(end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_node;
		end_node->prev = tmp;
	}

	return (end_node);
}
