
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
    int length = 0;
    int k = 0;
    float* array = (float*)NULL;

    /*
     * function prototypes
     */
    int number_of_zeros(float* elements, int number_of_elements);
    int number_of_negative_values(float* elements, int number_of_elements);
    int number_of_positive_values(float* elements, int number_of_elements);

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
     * uses functions to get each of the required values
     */
    zeros = number_of_zeros(array, length);
    negatives = number_of_negative_values(array, length);
    positives = number_of_positive_values(array, length);

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

int number_of_zeros(float* elements, int number_of_elements)
{
    const int nothing = 0;
    int control = 0;
    int count = 0;

    for (control = nothing; control < number_of_elements; control++) {
        if (elements[control] == nothing) {
            count++;
        }
    }

    return count;
}

int number_of_negative_values(float* elements, int number_of_elements)
{
    const int nothing = 0;
    int control = 0;
    int count = 0;

    for (control = nothing; control < number_of_elements; control++) {
        if (elements[control] < nothing) {
            count++;
        }
    }

    return count;
}

int number_of_positive_values(float* elements, int number_of_elements)
{
    const int nothing = 0;
    int control = 0;
    int count = 0;

    for (control = nothing; control < number_of_elements; control++) {
        if (elements[control] > nothing) {
            count++;
        }
    }

    return count;
}