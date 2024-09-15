#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Receives no argument
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	/* Declare the variables*/
	int digit = 0;

	for (; digit < 9; digit++)
	{
		printf("%d", digit);
	};

	/* Add new line */
	putchar('\n');

	return (0);
}