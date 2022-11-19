#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *run = NULL;
	listint_t *walk = NULL;
	run = list;
	walk = list;
	
	if (list == NULL)
	{
		return (0);
	}

	while (walk->next != NULL && run->next->next != NULL && list)
	{
		walk = walk->next;
		run = run->next->next;
		if (walk == run)
		{
			return (1);
		}
	}
	return (0);
}
