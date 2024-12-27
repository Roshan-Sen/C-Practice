#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Program to output the reverse complement of a DNA string

    Given: A DNA string s of at most 1000bp
    Return: The reverse complement of s

    Usage (in terminal): ./executable_file AAAACCCGGT
    Displays: ACCGGGTTTT

    Additional notes: the letters are capitalized
 */

/*
    Method to compute the reverse complement of a string

    Paramaters:
        original_string: the original DNA sequence
        reverse_string: the buffer to store the reverse complement
        length: length of the DNA sequence
 */
void reverse_complement(char* original_string, char* reverse_complement, size_t length);

/*
    Main method to test the reverse_complement method
 */
int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Insufficient parameters\n");
        return 0;
    }
    //Gather inputs
    char* input_string;
    char* reverse;
    size_t length = strlen(argv[1]);
    input_string = malloc(sizeof(char) * (length + 1));
    reverse = malloc(sizeof(char) * (length + 1));
    strcpy(input_string, argv[1]);

    //Run and display reverse complement
    reverse_complement(input_string, reverse, length);
    printf("%s\n", reverse);
    
    //Free memory
    free(input_string);
    input_string = NULL;
    free(reverse);
    reverse = NULL;
    return 0;
}

/*
    Method to compute the reverse complement of a string

    Paramaters:
        original_string: the original DNA sequence
        reverse_string: the buffer to store the reverse complement
        length: length of the DNA sequence
 */
void reverse_complement(char* original_string, char* reversed, size_t length){
    for(size_t i = 0; i < length; ++i){
        switch(original_string[i]){
            case 'A':
                reversed[length - 1 - i] = 'T';
                break;
            case 'C':
                reversed[length - 1 - i] = 'G';
                break;
            case 'G':
                reversed[length - 1 - i] = 'C';
                break;
            case 'T':
                reversed[length - 1 - i] = 'A';
                break;
            default:
                reversed[length - 1 - i] = original_string[i];
        }
    }
}