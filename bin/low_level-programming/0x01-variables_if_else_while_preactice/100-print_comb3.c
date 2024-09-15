#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Description : prints all possible different combo of 2 digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function
 * You can only use putchar 5 times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
