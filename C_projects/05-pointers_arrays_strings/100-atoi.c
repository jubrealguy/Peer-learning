#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			 printf("%d", (s[i] - '0'));

			if (s[i + 1] < '0' && s[i + 1] < '9')
				break;
		}
	}
	return (0);
}
