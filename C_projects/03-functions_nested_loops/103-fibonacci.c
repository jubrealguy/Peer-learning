#include <stdio.h>

int main(void)
{
	unsigned long int a = 1, b = 2;
	int i;

	unsigned long int sum = 2;

	for (i = 0; a < 4000000 && b < 4000000; i++)
	{
		a = b + a;
		b = a + b;

		if (a % 2 == 0)
			sum += a;
		if (b % 2 == 0)
			sum += b;
	}
	printf("%lu\n", sum);
	return (0);
}
