/*****************************
 * main: The main program by *
 * which to run the Unit     *
 * Converter Project         *
 *                           *
 * Author: Roshan Sen        *
 *                           *
 * Purpose: Serve as user    *
 * interface for thie Unit   *
 * Converter Project.        *
 *                           *
 * Usage: Compile the main   *
 * program and other modules *
 * to convert temperature    *
 * units.                    *
 *                           *
 *****************************/
#include <stdio.h>
#include <string.h>
#include "temperature.h"

//Function names
//celsuis_to_fahrenheit
//fahrenheit_to_celsius

char user_choice(char prompt[], char validinputs[]);//Method to read user input and control whether a valid choice is made
int char_in_str(char s[], char *c);//Method to check whether a character is in a string

//Main function
int main()
{
    printf("This is a simple temperature unit converter that converts units between fahrenheit and celsius.\n\n");
    char temperatureprompt[] = "Enter the unit of the current temperature reading (F or C): ";
    char validtemperatureunits[] = "FC";
    char selectedoption = user_choice(temperatureprompt, validtemperatureunits);
    printf("Selected option: %c\n\n", selectedoption);
    char line[100];
    float initialtemperature;
    if(selectedoption == validtemperatureunits[0])
    {
        printf("Enter the temperature in Fahrenheight: ");
    }
    else 
    {
        printf("Enter the temperature in Celsius: ");
    }
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &initialtemperature);
    if(selectedoption == validtemperatureunits[0])
    {
        printf("The temperature in Celsius is: %.2f\n", fahrenheit_to_celsius(&initialtemperature));
    }
    else 
    {
        printf("The temperature in Fahrenheit is: %.2f\n", celsuis_to_fahrenheit(&initialtemperature));
    }
 
}
/******************************
 * user_choice: function to   *
 * thata reads a character the*
 * user enters and determines *
 * whether that is a valid    *
 * option.                    *
 *                            *
 * return: a character that   *
 * is a valid option given the*
 * parameters.                *
 ******************************/

char user_choice(char prompt[], char validinputs[])
{
    char line[100];
    char choice;
    while(1)
    {
        printf("%s\n", prompt);
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c", &choice);
        if(char_in_str(validinputs, &choice))
        {
            break;
        }
        else
        {
            printf("That was not a valid option.\n");
        }

    }
    return choice;
}

/*******************************
 * char_in_str: A function that*
 * checks whether a character  *
 * is present in a string.     *
 *                             *
 * return: 1 if a character is *
 * in a string; 0 if a         *
 * character is in a string.   *
 *******************************/

int char_in_str(char s[], char *c){
    size_t len = strlen(s);
    for(int i = 0; i < len; ++i)
    {
        if(*c == s[i])
        {
            return 1;
        }
    }
    return 0;
}
