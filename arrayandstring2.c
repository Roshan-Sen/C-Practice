/********************************
 * arrayandstring2: Trying to   *
 * use arrays and strings in c  *
 * (part 2)                     *
 *                              *
 * Author: Roshan Sen           *
 *                              *
 * Purpose: Learn usage of array*
 * and string in c.             *
 *                              *
 * Usage: Run the program to see*
 * some strings and arrays      *
 ********************************/
#include <stdio.h>
#include <string.h>

int main()
{
	//Reading a string
	char firstname[100];
	char lastname[100];
	printf("Enter your first name: ");
	fgets(firstname, sizeof(firstname), stdin);
	//remove newline character
	firstname[strlen(firstname) - 1] = '\0';
	printf("Enter your last name: ");
	fgets(lastname, sizeof(lastname), stdin);
	lastname[strlen(lastname) - 1] = '\0';
	char fullname[199];
	strcpy(fullname, strcat(firstname, " "));
	strcpy(fullname, strcat(fullname, lastname));
	printf("Your full name is %s\n", fullname);

	//2D Arrays
	int numberset[2][3];
	numberset[0][0] = 16;
	numberset[0][1] = 15;
	numberset[0][2] = 12;
	numberset[1][0] = 23;
	numberset[1][1] = 20;
	numberset[1][2] = 19;
	printf("Here is an array\n");
	printf("%d %d %d\n", numberset[0][0], numberset[0][1], numberset[0][2]);
	printf("%d %d %d\n", numberset[1][0], numberset[1][1], numberset[1][2]);

	return (0);
}
