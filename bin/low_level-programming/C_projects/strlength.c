#include <stdio.h>

int _strlen(char s[]);

/**
 * strlen - Return the length of the string passed
 * @s: String to be passed
 *
 * Return: on success, returns the length of the string
 * on error, -1 is returned and the errno set appropriately
*/

int _strlen(char s[])
{
	int i;

	while (s[i] != '\0')
		i++;
	printf("%d", i);
	return (i);
}

/**
 * main - Entry point of our program
 *
 * Return: on success 0
 * on error, -1 is returned and the errno is set appropriately
*/

int main(void)
{
	_strlen("My");
	return (0);
}
