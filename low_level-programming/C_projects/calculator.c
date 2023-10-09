#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 * 
 * Return: Always (0) success
*/

int main(void)
{
	double num1;
	double num2;

	// Get the first number from the user using scanf	
	printf("Enter the first number: ");
	scanf("%lf", &num1);

	// Get the second number from the user
	printf("Enter the second number: ");
	scanf("%lf", &num2);

	//Print the result of the addition
	printf("The answer: %f \n", num1 + num2);

	// Return 0 after the main function
	return (0);
}