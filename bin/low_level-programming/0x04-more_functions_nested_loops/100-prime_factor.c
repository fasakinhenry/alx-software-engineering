#include <stdio.h>

/**
 * print_max_primef - Prints the largest prime factor
 * @n: the number parameter whose max prime factor we seek
 */

void print_max_primef(long n)
{
	long factor, high;

	while (factor < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}
		for (factor = 3; factor <= (n / 2); factor += 2)
		{
			if ((n % factor) == 0)
			{
				n /= factor;
				high = factor;
			}
		}
	}

	

	printf("%ld\n", high);
}

int main(void)
{
	/* print_max_primef(612852475143);
	print_max_primef(1231952); */
	print_max_primef(500);

	return (0);
}
