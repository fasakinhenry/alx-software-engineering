#include "main.h"

/**
 * jack_bauer - prints every min of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: On success, 0
 * on error, _1 is returned and the errno is set apporpriately
*/

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
