#include <stdio.h>

#define MAX_COUNT 98

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: on success, 0
 * on error, -1 is returned and the errorno is set appropriately
*/

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, sum = 0;

	for ( i = 0; i < MAX_COUNT; i++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	
	return (0);
}