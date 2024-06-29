/**********************
 * Program to convert *
 * a c string into    *
 * uppercase.         *
 *                    *
 * Author: Roshan Sen *
 *                    *
 * Updated: 5/26      *
 **********************/

#include <stdio.h>
#include <string.h>

int MAX_ITERATIONS = 100000;

void to_uppercase(char *input);

int main() {
    char line[1000];
    printf("Enter a line to convert into uppercase letters: ");
    fgets(line, sizeof(line), stdin);
    char *input_string = &line[0];

    to_uppercase(input_string);
    printf("String after conversion to uppercase letters: %s", line);

    return 1;
}

/***********************
 * Method to convert   *
 * lowercase letters in*
 * a string.           *
 *                     *
 * Param: Pointer to   *
 * 1st character of a  *
 * string.             *
 *                     *
 * return: void        *
 ***********************/

void to_uppercase(char *input) {
    int spacer = 0;
    int escape_flag = 1;
    while(escape_flag) {
        if(spacer > MAX_ITERATIONS){
            break;
        }

        switch(*(input + spacer)) {
            case 'a':
                *(input + spacer) = 'A';
                break;
            case 'b':
                *(input + spacer) = 'B';
                break;
            case 'c':
                *(input + spacer) = 'C';
                break;
            case 'd':
                *(input + spacer) = 'D';
                break;
            case 'e':
                *(input + spacer) = 'E';
                break;
            case 'f':
                *(input + spacer) = 'F';
                break;
            case 'g':
                *(input + spacer) = 'G';
                break;
            case 'h':
                *(input + spacer) = 'H';
                break;
            case 'i':
                *(input + spacer) = 'I';
                break;
            case 'j':
                *(input + spacer) = 'J';
                break;
            case 'k':
                *(input + spacer) = 'K';
                break;
            case 'l':
                *(input + spacer) = 'L';
                break;
            case 'm':
                *(input + spacer) = 'M';
                break;
            case 'n':
                *(input + spacer) = 'N';
                break;
            case 'o':
                *(input + spacer) = 'O';
                break;
            case 'p':
                *(input + spacer) = 'P';
                break;
            case 'q':
                *(input + spacer) = 'Q';
                break;
            case 'r':
                *(input + spacer) = 'R';
                break;
            case 's':
                *(input + spacer) = 'S';
                break;
            case 't':
                *(input + spacer) = 'T';
                break;
            case 'u':
                *(input + spacer) = 'U';
                break;
            case 'v':
                *(input + spacer) = 'V';
                break;
            case 'w':
                *(input + spacer) = 'W';
                break;
            case 'x':
                *(input + spacer) = 'X';
                break;
            case 'y':
                *(input + spacer) = 'Y';
                break;
            case 'z':
                *(input + spacer) = 'Z';
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