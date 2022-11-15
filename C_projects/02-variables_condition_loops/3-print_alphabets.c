#include <stdio.h>

int main(void)
{
	int small, big;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
	putchar('\n');
	return (0);
}
