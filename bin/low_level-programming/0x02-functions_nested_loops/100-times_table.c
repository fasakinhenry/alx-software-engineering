#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: n to be passed as parameter to the function
 *
 * Return: On success, 0
 * on error, -1 is returned and the errno is set appropriately
*/

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15){
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				prod = i * j;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}	
	}
}