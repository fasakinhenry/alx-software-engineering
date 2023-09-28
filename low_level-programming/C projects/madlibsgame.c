#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of our program
 * 
 * Return - Always 0 - success
*/

int main (void)
{
	char school[20];  // Alx
	char attribute[20];  // Great
	char celebfname[30];  // Julien
	char celeblname[30];  // Barbier
	// Getting user input
	printf("Enter your best tech school: ");
	scanf("%s", school);

	printf("Enter an adjective to describe the curriculum of the school: ");
	scanf("%s", attribute);

	printf("Enter your celebrity first name: ");
	scanf("%s%s", celebfname, celeblname);

	// Output of the program
	printf("The name of the best tech school is %s\n", school);
	printf("They have a %s curriculum\n", attribute);
	printf("That is why I love %s %s\n", celebfname, celeblname);

	// Return value of the main function
	return (0);
}