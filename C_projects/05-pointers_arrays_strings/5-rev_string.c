#include "main.h"

void rev_string(char *s)
{
	int i, j = 0;
	int tmp;

	for (i = 0; s[i]; i++)
		;

	i--;

	for (; j < i; i--)
	{
		tmp = s[j]; 
		s[j] = s[i];
		s[i] = tmp;
		j++;
	} 
}
