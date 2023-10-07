#include <stdio.h>

#define MAX_COUNT 4000000

/**
 * main -  prints the sum of the even fibonacci terms,
 * followed by a new line.
 *
 * Return: on success, 0
 * on error, -1 is returned and errno is set appropriately
*/

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, run_sum = 0, sum = 0;

	for (i = n1 + n2; i < MAX_COUNT; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if ((n1 % 2) == 0)
			run_sum += n1;
	}
	printf("%lu\n", run_sum);
	
	return (0);
}