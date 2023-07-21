#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
	int i, siz = (int)size;
	int low = 0;
	int high = siz-1;
	
	for (i = low; low <= high; i++)
	{
		int mid = low + (high - low)/2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
	}
	return (-1);
}
