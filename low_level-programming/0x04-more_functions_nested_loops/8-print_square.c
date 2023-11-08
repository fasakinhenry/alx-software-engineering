#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @size: This is the size of the square
 * If size is 0 or less print only a new line
 * Use the character # to print a square
 * You can only use the custom function 
 * _putchar to print
*/

void print_square(int size)
{
	int i, i2;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)	
	{
		for (i2 = 0; i2 < size; i2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
