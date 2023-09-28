#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Receives no arguments
 *
 * Return: Always 0 (success)
*/

#define MAX_COUNT 3
int counter = 0;
int count_max;

typedef struct studentlist
{
  char *name;
   int age;
 char *course;
 struct studentlist *next;
}studentlist;

/* let's create new students */
int main()
{
	studentlist *head = NULL;
	studentlist *oldstudent = NULL;
	studentlist *newstudent = NULL;
	studentlist *newstudent1 = NULL;

	char names[50];
	int ages;
	char courses[50];
	char searches[50];

	while (counter < 3)
	{
		/* code */
		printf("Enter the name of the new student: ");
		scanf("%s", names);
		printf("Enter the age of the new student: ");
		scanf("%d", &ages);
		printf("Enter the course of the new student: ");
		scanf("%s", courses);

		if (counter == 0)
		{
			/* code */
			oldstudent = malloc(sizeof(studentlist));
			oldstudent->name = strdup(names);
			(*oldstudent).age = ages;
			(*oldstudent).course = strdup(courses);
			oldstudent->next = NULL;
		} else if (counter == 1)
		{
			/* code */
			newstudent = malloc(sizeof(studentlist));
			newstudent->name = strdup(names);
			(*newstudent).age = ages;
			(*newstudent).course = strdup(courses);
		} else
		{
			/* code */
			newstudent1 = malloc(sizeof(studentlist));
			newstudent1->name = strdup(names);
			(*newstudent1).age = ages;
			(*newstudent1).course =strdup(courses);
			newstudent1->next = newstudent;
			head = newstudent1;

			printf("Enter the name of the student that you want to find: ");
			scanf("%s", searches);
		}

		/* printf("%s %d %s", names, ages, courses); 
		printf("Enter the name of the student that you want to find: ");
		scanf("%s", searches); */

		counter++;	}
	
	/*
	 John 
	oldstudent = malloc(sizeof(studentlist));
	oldstudent->name = strdup("John");
	(*oldstudent).age = 12;
	(*oldstudent).course = strdup("software engineering");
	oldstudent->next = NULL;
	Pascal
	newstudent = malloc(sizeof(studentlist));
	newstudent->name = strdup("Pascal");
	(*newstudent).age = 19;
	(*newstudent).course = strdup("Data science");
	newstudent->next =  oldstudent;
	Micheal
	newstudent1 = malloc(sizeof(studentlist));
	newstudent1->name = strdup("Michael");
	(*newstudent1).age = 70;
	(*newstudent1).course =strdup("AI");
	newstudent1->next = newstudent;
	*/ 

	 
	while (head != NULL)
	 {
	 	if (strcmp(head->name, searches) == 0)
	 	{
	 		printf("name = %s\n age = %d\n course = %s\n",
	 		head->name, head->age, head->course);
	 	}
	 	head = head->next;
	} 
	

	return (0);
}
