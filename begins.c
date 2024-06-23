/********************************
 * begins: Practice problem     *
 * Checks whether a string is   *
 * at the beginning of another  *
 * string.
 *                              *
 * Author: Roshan Sen           *
 *                              *
 * Purpose: Learn usage of array*
 * and string in c.             *
 *                              *
 * Usage: Run the program and   *
 * enter two strings to see if  *
 * the first string entered is  *
 * at the beginning of the      *
 * second one.                  *
 ********************************/
#include <stdio.h>

int begins(char *onestring, char *twostring);

int main(){
    char firstline[1000];
    char secondline[1000];

    printf("Enter a string: ");
    fgets(firstline, sizeof(firstline), stdin);
    printf("Enter another string: ");
    fgets(secondline, sizeof(secondline), stdin);

    char *firstpointer = &firstline[0];
    char *secondpointer = &secondline[0];
    int i = begins(firstpointer, secondpointer);
    if(i){
        printf("The first string you entered is at the beginning of the second string you entered.\n");
    }
    else{
        printf("The first string you entered is not at the beginning of the second string you entered.\n");
    }
    return 1;
}

/****************************
 * Method that returns true *
 * if the first parameter   *
 * string is a substring    *
 * of the beginning of the  *
 * second input string.     *
 ****************************/

int begins(char *onestring, char *twostring){
    int spacer = 0;
    while(1){
        if(*(onestring + spacer) == '\n'){
            break;
        }
        if(*(onestring + spacer) != *(twostring + spacer)){
            return 0;
        }
        /*printf("%d %c %c\n", spacer, *(onestring + spacer), *(twostring + spacer));*/
        spacer++;
    }
    return 1;
}
