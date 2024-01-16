
/*************************************
 * pointerpractice: Learning what    *
 * pointers are and how to use them  *
 * in c.                             *
 *                                   *
 * Author: Roshan Sen                *
 *                                   *
 * Purpose: Learning the usage of    *
 * pointers in c.                    *
 *                                   *
 * Usage: Run the program to print   *
 * some values.                      *
 *************************************/
#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j);

int main()
{
	int b = 42;
	printf("Declaring and initializing a variable b with value %d\n", b);
	int *a = &b;
	printf("&b: %p\n", &b);
	printf("a (pointer variable initialized to b's memory address): %p\n", a);
	//We can use the pointer variable a to access b
	*a = 50;
	printf("After the line *a = 50\n");
	printf("b: %d\n", b);
	printf("&b: %p\n", &b);
	printf("a: %p\n", a);
	//Term is called dereferencing a pointer
	
	//Pass by pointer, make a function that can modify multiple
	//variables at a time. Dynamic memory allocation also uses
	//pointers.
	
	printf("\n");
	int x, y, z;
	x = y = z = 0;
	printf("Initialized 3 variables x,y,z to 0\n");
	char line[100];
	printf("Enter 3 numbers separated by a single space: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d %d", &x, &y, &z);
	printf("The sum is equal to  %d\n", x + y + z);
	printf("The sscanf function takes pointers as the parameter.\n");
	
	//swapping the values in x and y
	printf("\n");
	printf("Before swapping, x = %d, and y = %d\n", x, y);
	printf("Before swapping, &x = %p, and &y = %p\n", &x, &y);
	swap(&x, &y);
	printf("After swapping, x = %d, and y = %d\n", x, y);
	printf("After swapping, &x = %p, and &y = %p\n", &x, &y);
	//pass by reference
	//Pointers also allow dynamic memory allocation
	
	int *arr;
	int length = 0;
	char line2[100];
	printf("Enter a length: ");
	fgets(line2, sizeof(line2), stdin);
	sscanf(line2, "%d", &length);
	arr = malloc(length * sizeof(int));
	for (int e = 0; e < length; e++)
		arr[e] = e;
	for (int i = 0; i < length; i++)
		printf("The value at index %d is %d\n", i, arr[i]);
	free(arr);

	return 0;
}

void swap(int *i, int *j)
{
	//Function takes memory addresses as parameters
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;
}
