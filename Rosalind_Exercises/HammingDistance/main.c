/*
 * Hamming Distance Problem
 * 
 * Given: Two DNA strings.
 * Return: An integer value representing the Hamming distance.
 * 
 * Usage (in terminal): ./executable_file GGGCCGTTGGT GGACCGTTGAC
 * Output (example): 3
 */

#include <stdio.h>
#include <string.h>

/*
 * Function to compute the hamming distance between two strings.
 * 
 * Parameters
 *     seq_one, seq_two: sequences to be compared
 * Returns
 *     unsigned int corresponding to the hamming distance.
 */
unsigned int hamming_distance(char* seq_one, char* seq_two);

/*
 * Main method to test the hamming_distance function
 */
int main(int argc, char* argv[]){
    //Check if sufficient arguments
    if(argc < 3){
        printf("Insufficient args, needs 3 but received %d.\n", argc);
        return 1;
    }
    
    //Check if lengths are equal
    if(strlen(argv[1]) != strlen(argv[2])){
        printf("The strings do not have equal length.\n");
        return 1;
    }

    //Print hamming distance
    printf("%u\n", hamming_distance(argv[1], argv[2]));

    return 0;
}


/*
 * Function to compute the hamming distance between two strings.
 * 
 * Parameters
 *     seq_one, seq_two: sequences to be compared
 * Returns
 *     unsigned int corresponding to the hamming distance.
 */
unsigned int hamming_distance(char* seq_one, char* seq_two){
    unsigned int distance = 0;
    size_t length = strlen(seq_one);
    for (size_t i = 0; i < length; ++i){
        if(seq_one[i] != seq_two[i]){
            ++distance;
        }
    }
    return distance;
}