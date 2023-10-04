#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: paremeter to be checked by the functon
 *
 * Return: On success, 0
 * on error, -1 is returned and errno set appropriately
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
