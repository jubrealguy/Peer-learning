#include <stdio.h>

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2;

	printf("%lu, %lu, ", a, b);
	
	for (i = 0; i < 24; i++)
	{
		a = b + a;
		b = a + b;

		printf("%lu, %lu", a, b);
		if (i == 23)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
