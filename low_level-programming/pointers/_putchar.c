#include <unistd.h>

/**
 * _putchar - custom putchar function
 * @c : character to be passed
 *
 * Return: character to be printed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
