#include <stdio.h>

/**
 * main - receives no arguments
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int c;

	c = getchar();

	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}

	return (0);
}
