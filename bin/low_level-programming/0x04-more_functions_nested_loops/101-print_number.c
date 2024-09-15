#include "main.h"

/**
 * print_number - functions that prints a number
 * @n: The number to be printed
*/

void print_number(int n)
{
	if ((n / 10) < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
