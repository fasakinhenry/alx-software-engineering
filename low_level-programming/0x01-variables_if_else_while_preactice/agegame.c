#include <stdio.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0(success)
*/

int main(void)
{
	/* Define variables to get age */
	int age;

	/* Get the age of the user */
	printf("Enter your age: ");
	scanf("%d", &age);

	if (age > 0 && age <= 1)
		printf("You are an infant\n");
	else if (age > 1 && age <= 4)
		printf("You are a toddler\n");
	else if (age > 4 && age <= 12)
		printf("You are a child\n");
	else if (age > 12 && age <= 19)
		printf("You are a teen\n");
	else if (age > 19 && age <= 39)
		printf("You are an adult\n");
	else if (age > 39 && age <= 60)
		printf("You are a middle aged adult\n");
	else if (age > 60)
		printf("You are a middle aged adult\n");
	else
		printf("Enter a specific acceptable age. This is not acceptable now😭\n");

	return (0);
}
