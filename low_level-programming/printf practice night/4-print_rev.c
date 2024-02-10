#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @str: the string to be printed
 */

void print_rev(char *str)
{
	int i;
	int length = _strlen(str);
	for (i = length; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
