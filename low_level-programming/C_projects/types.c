#include <stdio.h>

/**
 * main - Entry point of our program
 * Return: Always 0 (success)
 * on error, -1 is returned
 */

int main(void)
{
	char a;
	unsigned char b;
	signed char c;
	int d;
	unsigned int e;
	short f;
	unsigned short g;
	long h;
	unsigned long i;
	float j;
	double k;
	long double l;

	printf("# The Integer types and their value tables\n\n");
	printf("The size of char: %ld \n", sizeof(a));
	printf("The size of unsigned char: %ld \n", sizeof(b));
	printf("The size of signed char: %ld \n", sizeof(c));
	printf("The size of int: %ld \n", sizeof(d));
	printf("The size of unsigned int: %ld \n", sizeof(e));
	printf("The size of short: %ld \n", sizeof(f));
	printf("The size of unsigned short: %ld \n", sizeof(g));
	printf("The size of long: %ld \n", sizeof(h));
	printf("The size of unsigned long: %ld \n", sizeof(i));
	printf("\n # The Floating-point types and their value tables\n\n");
	printf("The size of float: %ld \n", sizeof(j));
	printf("The size of double: %ld \n", sizeof(k));
	printf("The size of long double: %ld \n", sizeof(l));
	return (0);
}
