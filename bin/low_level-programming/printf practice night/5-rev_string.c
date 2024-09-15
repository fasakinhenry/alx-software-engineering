#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = 0, i = 0, j = 0;
	while (s[j] != '\0')
	{
		length++;
		j++;
	}

	for (i =0, j = length - 1; i < j; i++, j--)
	{
		char str = s[i];
		s[i] = s[j];
		s[j] = str;
	}
}
