#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Introduction to Mendelian inheritance problem.

    Given: Three positive integers k, m, m representting a pouplation
    containing k + m + n organisms: k individuals are homozygous
    dominant for a factor, m are heterozygous, and n are homozygous recessive.

    Return: The probability that two randomly selected mating organisms will 
    produce an individual possessing a dominant allele (and thus displaying
    the dominant phenotype). Assume any two organisms can mate.

    Usage (in terminal): ./executable_file k m n
    Output (example): 0.78333
 */

size_t NUM_GENOTYPES = 3;

long convert_input(char* number_string, size_t length);

float calculate_probability(long* genotypes);

long factorial(long num);

/*
    Main method to solve the problem
 */
int main(int argc, char* argv[]){
    //Check if arguments is 4
    if(argc != NUM_GENOTYPES + 1){
        printf("Incorrect number of arguments.\n");
        return 0;
    }

    //Store the counts for each genotype
    long* genotype_counts; //[k,m,n]
    genotype_counts = malloc(sizeof(long) * NUM_GENOTYPES);
    for(size_t i = 1; i < argc; ++i){
        long temp = convert_input(argv[i], strlen(argv[i]));
        if(temp == -1){
            printf("Ending program\n");
            free(genotype_counts);
            genotype_counts = NULL;
            return 0;
        }
        else {
            genotype_counts[i - 1] = temp;
        }
    }

    //Display the array
    /*
    printf("[");
    for(size_t i = 0; i < NUM_GENOTYPES; ++i){
        printf("%li,", genotype_counts[i]);
    }
    printf("]\n");
     */
    
    //Calculate the probability and print it
    printf("%f\n", calculate_probability(genotype_counts));

    //Release allocated memory
    free(genotype_counts);
    genotype_counts = NULL;
    
    return 0;
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

/*
    Method to calculate the probability of getting an offspring with 
    expression of the dominant phenotype. The method works by going through
    all possible pairing and calculating the chance a pairing produces
    offspring with the dominant phenotype out of the total pairing number.

    Parameters:
        genotypes: The long array of the genotypes present in the population
        in the order [k, m, n]
        length: The length of the array
    
    Returns:
        A float value of the the probaility of an offspring having the dominant
        phenotype.
 */
float calculate_probability(long* genotypes){
    float probability = 0;

    long k = genotypes[0];
    long m = genotypes[1];
    long n = genotypes[2];
    long total = k + m + n;
    long total_pairs = ((total) * (total - 1)) / 2;

    //Calculate pairing based on the k group
    probability += (float) factorial(k - 1) / total_pairs; //Selfing within dominant group
    probability += (float) k * (m + n) / total_pairs; //Mating with either group

    //Calculate pairing based on the m group
    probability += (float) 0.75 * factorial(m - 1) / total_pairs; //Selfing within heterozygous group
    probability += (float) 0.5 * m * n / total_pairs; //Mating with the homozygous recessive group
    
    return probability;
}

/*
    Function to compute the factorial of a long value.

    Parameters:
        num: long value for calculation
    
    Returns:
        A float value equal to the factorial of the number
 */
long factorial(long num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}