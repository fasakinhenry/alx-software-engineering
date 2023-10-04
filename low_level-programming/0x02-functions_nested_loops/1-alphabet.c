#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * 
 * Return: On success 1
 * On error, -1 is returned and errorno is set appropriately
*/

void print_alphabet(void)
{
	char i = 'a';

	for(; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
