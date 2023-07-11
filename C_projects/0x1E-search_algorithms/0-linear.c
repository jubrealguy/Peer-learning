#include "search_algos.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
	int i;
	int siz = (int)size;

	if (array == NULL || siz == 0)
		return (-1);

	for (i = 0; i < siz; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
