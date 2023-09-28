#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - receives no argument
 *
 *Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;

	if (o > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, o);
	} else if (o == 0)
	{
		printf("The last digit of %d is %d and is zero\n", n, o);
	} else if (o < 6 && o != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}

	return (0);
}
