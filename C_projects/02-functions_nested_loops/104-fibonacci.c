#include <stdio.h>

int main(void)
{
	int i;
	unsigned long int a, b, div = 1000000000;
	unsigned long int a_head, a_tail, b_head, b_tail, sum_head, sum_tail;
	unsigned long int add;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);

	for (i = 0; a < div && b < div; i++)
	{
		a = b + a;
		b = a + b;
		printf("%lu, %lu, ", a, b);
		
	}

	a_head = a / div;
        b_head = b / div;
        a_tail = a % div;
        b_tail = b % div;

	for (i *= 2; i < 96; i++)
	{

		add = (a_tail + b_tail) / div;
		sum_tail = (a_tail + b_tail) % div;
		sum_head = add + a_head + b_head;
		printf("%lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
                b_tail = sum_tail;

		if (i == 95)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
