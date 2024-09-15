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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
