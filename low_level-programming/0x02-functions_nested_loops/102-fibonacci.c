#include <stdio.h>

#define MAX_COUNT 50

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return : on success, 0
 * on error, -1 is returned and the errno is set appropriately
*/

int main(void)
{
	int i;
	/* Make it unsigned so all numbers will be positive */
	unsigned long n1, n2, sum;
	n1 = 0;
	n2 = 1;

	for (i = 0; i < MAX_COUNT; i++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;
		if (i < 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}