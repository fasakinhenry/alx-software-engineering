#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');

	return (0);
}
