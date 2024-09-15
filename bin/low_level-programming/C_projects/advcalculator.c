#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	double num1;
	double num2;
	char op;

	printf("Enter a number: ");
	scanf("%lf", &num1);

	printf("Enter an operator: ");
	scanf(" %c", &op);

	printf("Enter a number: ");
	scanf("%lf", &num2);

	/* Perform the calculation based on the operator */

	if (op == '+')
	{
		printf("The answer of the calculation is %f\n", num1 + num2);
	} else if (op = '-') {
		printf("The answer of the calculation is %f\n", num1 - num2);
	} else if (op == '*') {
		printf("The answer of the calculation is %f\n", num1 * num2);
	} else if (op == '/') {
		printf("The answer of the calculation is %f\n", num1 / num2);

	} else {
		printf("Invalid operator");
	}

	return (0);

}
