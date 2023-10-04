#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Description:  program that prints all the numbers of base 16 in lowercase
 * followed by a new line.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char alpha = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
