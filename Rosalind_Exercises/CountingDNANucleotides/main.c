#include <stdio.h>
#include <string.h>
/*
    Exercise details

    Given: A DNA string s of length at most 1000 nt
    Return/Output: Four integers (separated by spaces) counting respective number of times ACGT occurs

    Additional note: the string is made of uppercase letters

    Usage in terminal: ./executable_filename AACGTAA
 */

/*
    Method to count the number of each nucleotide in the string
    Parameters:
        -target_string: the DNA sequence to be examined
        -length: the length of the DNA sequence
        -buffer: the 4 member int array to store the return values ([#A,#C,#G,#T])
 */
void count_nucleotides(char* target_string, size_t length, int* buffer);

/*
    Main method to solve the counting DNA nucleotides problem
 */
int main(int argc, char* argv[]){
    //End program if no second argument was passed
    if(argc < 2){
        printf("Insufficient arguments.\n");
        return 0;
    }

    char input_string[1000];
    //printf("The length of the input string is %lu.\n", strlen(argv[1]));
    size_t input_length = strlen(argv[1]);
    strcpy(input_string, argv[1]);
    int counts[] = {0,0,0,0};
    count_nucleotides(input_string, input_length, counts);

    for(size_t i = 0; i < sizeof(counts) / sizeof(counts[0]); ++i){
        printf("%d ", counts[i]);
    }
    printf("\n");
}

/*
    Method to count the number of each nucleotide in the string
    Parameters:
        -target_string: the DNA sequence to be examined
        -length: the length of the DNA sequence
        -buffer: the 4 member int array to store the return values ([#A,#C,#G,#T])
 */
void count_nucleotides(char* target_string, size_t length, int* buffer){
    enum DNA_LETTERS {
        A, C, G, T
    };
    for(size_t i = 0; i < length; ++i){
        switch (target_string[i]){
            case 'A':
                ++buffer[A];
                break;
            case 'C':
                ++buffer[C];
                break;
            case 'G':
                ++buffer[G];
                break;
            case 'T':
                ++buffer[T];
                break;
            default:
                continue;
        }
    }
}