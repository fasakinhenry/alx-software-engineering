#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @l: parameter to be checked
 *
 * Return: Last digit of the number checked
*/

int print_last_digit(int l)
{
	int last_digit;

	last_digit = 0;
	/* Check if number is negative to make it positive */
	if (l < 0)
		last_digit = (-1 * l) % 10;
	else
		last_digit = l % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
