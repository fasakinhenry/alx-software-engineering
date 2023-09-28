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
	char alpha = 'a';

	/* The while loop checks if alphabet <= z and increments it */
	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		};
		alpha++;
	};

	/* Add new line */
	putchar('\n');

	return (0);
}
