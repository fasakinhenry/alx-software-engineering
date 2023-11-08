#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: this is the size of the triangle
 * If size <= 0 , print only a new line
 * Use the character # to print the triangle
 * You are only allowed to use the putchar custom function
*/

void print_triangle(int size)
{
	int i, space;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (space = 1; space < size - i; space++)
		{
			_putchar(' ');
		}
		for (space = 0; space <= i; space++)
			_putchar('#');
		_putchar('\n');
	}
}
