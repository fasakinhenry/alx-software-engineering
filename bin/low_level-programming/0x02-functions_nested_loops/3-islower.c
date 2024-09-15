#include "main.h"

/**
 * _islower -  Checks for lowercase characters
 * @c: argument passed into the function to be checked
 *
 * Return: on success, 0
 * on error, -1 is returned and errno is set appropriately
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
