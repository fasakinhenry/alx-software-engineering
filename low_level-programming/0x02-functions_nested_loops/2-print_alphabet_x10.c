#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase, followed by a new line.
 * 
 * Return: On sccess, 1
 * on error, returns -1 with the appropriate set errno 
*/

void print_alphabet_x10 (void)
{
	char digit;
	char alpha;
	/* Create a print numbers while a <= z */
	/* char alpha = 'a';*/

	for (digit = '0'; digit <= '9'; digit++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		
	}
}
