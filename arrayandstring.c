/********************************
 * arrayandstring: Trying to use*
 * arrays and strings in c.     *
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
	/* Declaring an array */
	int datalist[3];
	datalist[0] = 1;
	datalist[1] = 2;
	datalist[2] = 3;
	printf("The three items in the datalist array are %d, %d, and %d\n", datalist[0], datalist[1], datalist[2]);

	/* Float array */
	float inputnums[5];
	inputnums[0] = 15.0;
	inputnums[1] = 22.0;
	inputnums[2] = 32.0;
	inputnums[3] = 16.0;
	inputnums[4] = 12.0;

	float total;
	float average;
	total = inputnums[0] + inputnums[1] + inputnums[2] + inputnums[3] + inputnums[4];
	average = total / 5.0;
	printf("Here are 5 numbers: %f, %f, %f, %f, %f\n", inputnums[0], inputnums[1], inputnums[2], inputnums[3], inputnums[4]);
	printf("The total is %f\n", total);
	printf("The average is %f\n", average);

	/* Strings */
	char teststring[30];
	strcpy(teststring, "Hello World!");
	puts(teststring);

	char anotherstring[4];
	anotherstring[0] = 'H';
	anotherstring[1] = 'i';
	anotherstring[2] = '!';
	anotherstring[3] = '\0';
	printf("%s\n", anotherstring);

	char onestring[4];
	char twostring[4];
	char combinedstring[30];
	strcpy(onestring, "one");
	strcpy(twostring, "two");
	strcpy(combinedstring, strcat(onestring,twostring));
	printf("%s\n", combinedstring);
	int stringlength;
	stringlength = strlen(combinedstring);
	printf("The length of the previous string was %d without the null character\n", stringlength);
	int comparison = strcmp(onestring, twostring);
	printf("Since the value strcmp gave was %d, the strings are not equal\n", comparison);


	return(0);
}
