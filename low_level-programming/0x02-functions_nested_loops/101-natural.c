#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 or 5 below 1024
 *
 * Return : on success, 0
 * on error, -1 is returned and the errno is set appropriately
*/

int main(void)
{
	int i, run_sum;

	run_sum = 0;

	for (i = 0; i < 1024; i++){

		if ((i % 3) == 0 || (i % 5) == 0)
			run_sum += i;
	}
	printf("%d\n", run_sum);

	return (0);
}
