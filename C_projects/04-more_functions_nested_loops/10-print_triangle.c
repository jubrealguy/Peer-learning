#include "main.h"

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (k = 1; k <= i - j; k++)
			       _putchar('#');
			_putchar('\n');	
		}
	}
	else
		_putchar('\n');
}
