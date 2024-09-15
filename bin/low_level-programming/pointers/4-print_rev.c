#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string parameter passed into the function
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{}
	for (i = i - 1; i != 0; i--)
		_putchar(*s);
}
