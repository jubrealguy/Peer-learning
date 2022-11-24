#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;
	listint_t *temp_2 = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = number;
	
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}

	temp = *head;
	temp_2 = *head;

	while (temp->next != NULL)
	{
		if (temp->n < new->n && temp->next->n > new->n)
		{
			new->next = temp->next;
			temp->next = new;
		}
		
		/*if (temp->n < new->n)
                {
                        temp_2 = temp->next;
		}*/
		temp = temp->next;

	}

	if (temp->n < new->n)
	{
		new->next = NULL;
		temp->next = new;
	}
	if (temp_2->n > new->n)
	{
		new->next = temp_2;
		*head = new;
	}
	
	return (new);
	
}
