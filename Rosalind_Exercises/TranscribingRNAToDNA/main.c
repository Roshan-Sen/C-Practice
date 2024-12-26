#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Exercise details

    Given: A DNA string t having length of at most 1000nt corresponding to the coding strand
    Return: The transcribe RNA string of t

    Additional notes: Letters are uppercase

    Usage (in terminal): ./executable_file ACTGAT
    Outputs: ACUGAU
 */

/*
    Method to convert the T characters in the input string to U

    Parameters:
        dna_string: The character array for conversion into RNA
        length: Length of the input string
 */
void dna_to_rna(char* dna_string, size_t length);

/*
    Main method to test the DNA to RNA function
 */
int main(int argc, char* argv[]){
    //If insufficient arguments terminate
    if(argc < 2){
        printf("Insufficient arguments\n");
        return 0;
    }
    //Use dynamic allocation of character string
    char* input_string;
    size_t input_length = strlen(argv[1]);
    input_string = malloc(sizeof(char) * 1000);
    strcpy(input_string, argv[1]);

    //Modify string and display output
    dna_to_rna(input_string, input_length);
    printf("%s\n", input_string);

    free(input_string);
    input_string = NULL;
    return 0;
}

/*
    Method to convert the T characters in the input string to U

    Parameters:
        dna_string: The character array for conversion into RNA
        length: Length of the input string
 */
void dna_to_rna(char* dna_string, size_t length){
    for(size_t i = 0; i < length; ++i){
        if(dna_string[i] == 'T'){
            dna_string[i] = 'U';
        }
    }
}