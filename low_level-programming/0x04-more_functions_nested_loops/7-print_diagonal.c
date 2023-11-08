#include "main.h"

/**
 * print_diagonal - draws a diagonal on the termninal
 * @n : n is the number of times the \ gets printed
 * The diagonal should end with a \n
 * If n <= 0 , print only \n
*/

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)	
	{
		for(space = 0; space < i; space ++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
