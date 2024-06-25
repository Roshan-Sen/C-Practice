/**********************
 * Program to convert *
 * a c string into    *
 * lowercase.         *
 *                    *
 * Author: Roshan Sen *
 *                    *
 * Updated: 5/26      *
 **********************/

#include <stdio.h>
#include <string.h>

int MAX_ITERATIONS = 100000;

void to_lowercase(char *input);

int main() {
    char line[1000];
    printf("Enter a line to convert into lowercase letters: ");
    fgets(line, sizeof(line), stdin);
    char *input_string = &line[0];

    to_lowercase(input_string);
    printf("String after conversion to lowercase letters: %s", line);

    return 1;
}

/***********************
 * Method to convert   *
 * capital letters in a*
 * string.             *
 *                     *
 * Param: Pointer to   *
 * 1st character of a  *
 * string.             *
 *                     *
 * return: void        *
 ***********************/

void to_lowercase(char *input) {
    int spacer = 0;
    int escape_flag = 1;
    while(escape_flag) {
        if(spacer > MAX_ITERATIONS){
            break;
        }

        switch(*(input + spacer)) {
            case 'A':
                *(input + spacer) = 'a';
                break;
            case 'B':
                *(input + spacer) = 'b';
                break;
            case 'C':
                *(input + spacer) = 'c';
                break;
            case 'D':
                *(input + spacer) = 'd';
                break;
            case 'E':
                *(input + spacer) = 'e';
                break;
            case 'F':
                *(input + spacer) = 'f';
                break;
            case 'G':
                *(input + spacer) = 'g';
                break;
            case 'H':
                *(input + spacer) = 'h';
                break;
            case 'I':
                *(input + spacer) = 'i';
                break;
            case 'J':
                *(input + spacer) = 'j';
                break;
            case 'K':
                *(input + spacer) = 'k';
                break;
            case 'L':
                *(input + spacer) = 'l';
                break;
            case 'M':
                *(input + spacer) = 'm';
                break;
            case 'N':
                *(input + spacer) = 'n';
                break;
            case 'O':
                *(input + spacer) = 'o';
                break;
            case 'P':
                *(input + spacer) = 'p';
                break;
            case 'Q':
                *(input + spacer) = 'q';
                break;
            case 'R':
                *(input + spacer) = 'r';
                break;
            case 'S':
                *(input + spacer) = 's';
                break;
            case 'T':
                *(input + spacer) = 't';
                break;
            case 'U':
                *(input + spacer) = 'u';
                break;
            case 'V':
                *(input + spacer) = 'v';
                break;
            case 'W':
                *(input + spacer) = 'w';
                break;
            case 'X':
                *(input + spacer) = 'x';
                break;
            case 'Y':
                *(input + spacer) = 'y';
                break;
            case 'Z':
                *(input + spacer) = 'z';
                break;
            case '\0':
                escape_flag = 0;
                break;
            default:
                /*printf("The character wasn't an A\n");*/
                break;
        }

        spacer++;

    }
}
