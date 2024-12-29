#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/*
    Solution the the Wascally Wabbits problem. Rabbits take 1 month to
    reach maturity before they can breed to produce k offspring. How many
    rabbits are present after n months given immature mating pair

    Given: Positive integers n (months) <= 40 and k (num pair produced per mating pair) <=5
    Output: Total number of rabbit pairs that will be present after n months if we begin with 1 immature pair

    Usage: ./executable_file 5 3
    Displays: 19
 */

long convert_input(char* number_string, size_t length);

int calculate_pairs(int n, int k);


/*
    Main method of the solution
 */
int main(int argc, char* argv[]){
    if(argc < 3){
        printf("Insufficient arguments\n");
        return 0;
    }
    //Gather input data
    int n = (int) convert_input(argv[1], strlen(argv[1]));
    int k = (int) convert_input(argv[2], strlen(argv[2]));
    //printf("%i, %i\n", n, k);

    //Calculate modified fibonacci sequence
    printf("%i\n", calculate_pairs(n, k));

    return 0;
}

/*
    Method to calculate the number of rabbit pairs given the integers
    n and k. This is based on the formula Fn = Fn-1 + k * Fn-2.

    Paramters:
        n: number of months to track
        k: number of breeding pairs produced per breeding pair
    
    Returns: Integer value corresponding to the number of immature and mature breeding
    pairs aften n months
 */
int calculate_pairs(int n, int k){
    if(n == 1 || n == 2){
        return 1;
    }

    int buffer[n];
    for(size_t i = 0; i < n; ++i){
        if(i == 0 || i == 1){
            buffer[i] = 1;
        }
        else{
            buffer[i] = buffer[i - 1] + k * buffer[i - 2];
        }
    }
    return buffer[n - 1];
}


/*
    Method to check if one of the inputted numbers is valid and convert
    the string literal into a long int

    Parameters:
        number_string: the character array in question
        length: length of the character array excluding null terminator
    
    Returns:
        -1 if convertion is not possible
        number_string in long int format if convertion is possible
 */
long convert_input(char* number_string, size_t length){
    for (size_t j = 0; j < length; ++j){
        if(!isdigit(number_string[j])){
            printf("Non-digit found in numerical paramter.\n");
            return -1;
        }
    }
    return strtol(number_string, NULL, 10);
}