#include <stdio.h>

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *hello = "Hello, World!";

	int i;

	for (i = 0; hello[i] != '\0'; i++)
	{
		printf("%c", hello[i]);
	}

	printf(" - This phrase has %d letters", i);

	printf("\n");

	return (0);
}
