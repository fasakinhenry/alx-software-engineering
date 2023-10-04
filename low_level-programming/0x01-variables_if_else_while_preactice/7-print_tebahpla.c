#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
