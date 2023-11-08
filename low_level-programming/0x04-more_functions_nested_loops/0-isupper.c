#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: string to be passed into the function
 *
 * Return: 1, if c is uppercase
 * else 0 is returned
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else {
		return (0);
	}
}