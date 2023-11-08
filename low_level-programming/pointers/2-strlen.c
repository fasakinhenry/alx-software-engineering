#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string parameter
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
	{
		counter++;
	}

	return (counter);
}
