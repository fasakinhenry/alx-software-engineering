#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point of our program
 * Return: Always 0(success)
 * on error, -1 is always returned
 */

int main(void)
{
	printf("The storage size for int: %ld \n", sizeof(int));
	printf("Minimum int positive value: %d \n", INT_MIN);
	printf("The maximum int positive value: %d \n", INT_MAX);
	return (0);
}
