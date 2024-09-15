#include <stdio.h>
#include <float.h>

/**
 * main - Entry point of our program
 * Return: Always 0(success)
 * on error, -1 is returned
 */

int main(void)
{
	printf("Storage size for float: %ld \n", sizeof(float));
	printf("Minimum float positive value: %E \n", FLT_MIN);
	printf("Maximum float positive value: %E\n", FLT_MAX);
	printf("Precision value: %d\n", FLT_DIG);
	return (0);
}
