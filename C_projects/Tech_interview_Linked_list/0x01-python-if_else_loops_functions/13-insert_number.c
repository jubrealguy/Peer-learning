#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;

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

	while (temp->next != NULL)
	{
		/*if (temp->n > new->n)
                {
                        new->next = temp;
                        *head = new;
                        return (new);
                } This is the part messing with our code*/

		else if (temp->n < new->n && temp->next->n > new->n)
		{
			new->next = temp->next;
			temp->next = new;
		}

		temp = temp->next;

	}

	if (temp->n < new->n)
	{
		new->next = NULL;
		temp->next = new;
	}
	return (new);
	
}
