#include "main.h"
#include <stdio.h>

#define MAX_COUNT 98

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: Parameter to be passed into the function
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= MAX_COUNT; i++)
	{
		if (i > n && n != MAX_COUNT)
		{
			printf(",");
			printf(" ");
		}

		printf("%d", i);
	}
	printf("\n");
}
