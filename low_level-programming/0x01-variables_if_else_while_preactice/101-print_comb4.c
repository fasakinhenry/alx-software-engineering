#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Description : prints all possible different combo of 3 digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered same combination
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i <= 7)
	{
		int j = i + 1;

		while (j <= 8)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
