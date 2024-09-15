#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: The parameter to be printed
 *
 * Return: if n is greater than zero, 1
 * n is zero, 0
 * n is less than zero, -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
