#include "main.h"

int _strlen(char *s);

/**
 * _strlen - function that returns the length of a string
 * @s: The string whose length is to be counted
 *
 * Return: The length of the string
*/

int _strlen(char *s)
{
	int counter = 0;

	while(*s++)
	{
		counter++;
	}

	return(counter);
}
