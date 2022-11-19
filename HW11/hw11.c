
/*
 * External Source: https://www.youtube.com/watch?v=5nyMb7hJ7Xs
 * 
 */

/*
 * imports
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * main
 */
int main()
{
    /*
     * variables
     */
    const int program_success_code = 0;
    const int program_fail_code = -1;
    const int nothing = 0;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int length;
    int k;
    int value;
    float* array = (float*)NULL;

    /*
     * greeting
     */
    printf("Hello user.\n");

    /*
     * get length of array
     */
    printf("Please input the length of your array.\n");
    scanf("%d", &length);

    /*
     * idiotproof length
     */
    if (length <= nothing) {
        printf("You cannot have a length less than or equal to %d.\n", nothing);
        exit(program_fail_code);
    }

    /*
     * memory allocate the array with the length
     */
    array = (float*)malloc(sizeof(float) * length);

    /*
     * check if memory allocation worked
     */
    if (array == (float*)NULL) {
        printf("Could not allocate memory for array.\n");
        exit(program_fail_code);
    }

    /*
     * get the values of the array
     */
    for (k = nothing; k < length; k++) {
        printf("array[%d]=", k);
        scanf("%f", &array[k]);
    }

    /*
     * check if elements are equal to nothing
     */
    for (k = nothing; k < length; k++) {
        value = array[k];
        if (value == nothing) {
            zeros++;
        }
    }

    /*
     * check if elements are less than zero or negative
     */
    for (k = nothing; k < length; k++) {
        value = array[k];
        if (value < 0) {
            negatives++;
        }
    }

    /*
     * check if elements are greater than zero or positive
     */
    for (k = nothing; k < length; k++) {
        value = array[k];
        if (value > 0) {
            positives++;
        }
    }

    /*
     * outputs the results
     */
    printf("There are %d negatives.\n", negatives);
    printf("There are %d zeros.\n", zeros);
    printf("There are %d positives.\n", positives);

    /*
     * free array from memory
     */
    free(array);
    array = (float*)NULL;

    /*
     * return
     */
    return program_success_code;
}