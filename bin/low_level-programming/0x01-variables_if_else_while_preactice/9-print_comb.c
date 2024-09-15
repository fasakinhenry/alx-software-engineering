#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Description - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar four times in code
 * You are not allowed to use any variable of type char
 *
 * Return: Always 0(success)
*/

int main(void)
{
	int num;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
