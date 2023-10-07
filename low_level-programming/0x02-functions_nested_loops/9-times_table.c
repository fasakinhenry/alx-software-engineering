#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: On success, 0
 * On error, -1 is returned and errno set appropriately
*/

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
