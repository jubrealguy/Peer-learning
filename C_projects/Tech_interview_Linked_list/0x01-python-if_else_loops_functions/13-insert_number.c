#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;
<<<<<<< HEAD
	listint_t *temp2 = NULL;
=======
	listint_t *temp_2 = NULL;
>>>>>>> 503162f2e53df66a46d2b3da6d7141a9136e53be

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
<<<<<<< HEAD
		/*if (temp->n > new->n)
                {
                        new->next = temp;
                        *head = new;
                        return (new);
                } This is the part messing with our code*/

=======
>>>>>>> 503162f2e53df66a46d2b3da6d7141a9136e53be
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
