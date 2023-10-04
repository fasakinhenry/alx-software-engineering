#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combo of 3 digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	for (i = 0; i <= 99; i++)
	{
		int j;
		for (j = i; j <= 99; j++)
		{
			int tens_i = i / 10;
			int ones_i = i % 10;
			int tens_j = j / 10;
			int ones_j = j % 10;

			/* Ensure that the combination is printed in ascending order */
			if (i <= j)
			{
				/* Print tens digit of i */
				putchar('0' + tens_i);

				/* Print ones digit of i */
				putchar('0' + ones_i);

				/* Print a space to separate the two numbers */
				putchar(' ');

				/* Print tens digit of j */
				putchar('0' + tens_j);

				/* Print ones digit of j */
				putchar('0' + ones_j);

				/* Print a comma and space if not the last combination */
				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');  /* Print a newline character*/

	return (0);
}
