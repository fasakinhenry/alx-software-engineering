#include <stdio.h>

/**
 * fizzbuzz - prints the numbers from 1 to 100,
 * followed by a new line.
 * But for multiples of three print Fizz
 * instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five
 * print FizzBuzz.
 * @min: minimum range of value
 * @max: maximumn range of values
*/

void fizzbuzz(int min, int max)
{
	for (; min <= max; min++)
	{
		if (min % 3 == 0 && min % 5 == 0)
			printf("FizzBuzz");
		else if (min % 3 == 0)
			printf("Fizz");
		else if (min % 5 == 0)
			printf("Buzz");
		else
			printf("%d", min);
		printf(" ");
	}
	printf("\n");
}

int main(void)
{
	fizzbuzz(1, 100);

	return (0);
}
