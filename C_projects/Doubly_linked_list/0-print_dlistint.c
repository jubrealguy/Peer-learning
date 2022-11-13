#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
        size_t count = 0;
        const dlistint_t *temp = NULL;

        temp = h;

        while (temp != NULL)
        {
                count++;
                printf("%d\n",temp->n);
                temp = temp->next;
        }
        return (count);
}

