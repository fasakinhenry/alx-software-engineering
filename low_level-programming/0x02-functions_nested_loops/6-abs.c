#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @n: Parameter to be checked
 * Return: on success, 0
 * on error, -1 is returned and the errorno is set appropriately
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
