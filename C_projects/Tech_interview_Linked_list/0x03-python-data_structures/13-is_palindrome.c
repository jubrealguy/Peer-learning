#include "lists.h"
#include <stddef.h>
int is_palindrome(listint_t **head)
{
	listint_t *temp = NULL;
	int list[1024];
	int i = 0;
	int j = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (1);
	}
	temp = *head;

	while (temp != NULL)
	{
		list[i] = temp->n;
		i++;
		temp = temp->next;
	}
	while (j <= i/2)
	{
		if (list[i - 1] != list[j])
		{
			return (0);
		}
		i--;
		j++;
	}
	return (1);
}
