#include "main.h"
#include <stdio.h>

int main(void)
{
	unsigned long int i;
	unsigned long n = 612852475143;
	
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lu\n", i);
	return (0);
}
