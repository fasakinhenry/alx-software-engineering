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
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');

	return (0);
}
