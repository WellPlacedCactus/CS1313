
// https://www.youtube.com/watch?v=5nyMb7hJ7Xs

#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    printf("Hello user.\n");
    
    printf("Please input the length of your array.\n");
    scanf("%d", &length);

    if (length <= nothing) {
        printf("You cannot have a length less than or equal to %d.\n", nothing);
        exit(program_fail_code);
    }

    array = (float*)malloc(sizeof(float) * length);

    if (array == (float*)NULL) {
        printf("Could not allocate memory for array.\n");
        exit(program_fail_code);
    }

    for (k = nothing; k < length; k++) {
        printf("array[%d]=", k);
        scanf("%f", &array[k]);
    }

    for (k = nothing; k < length; k++) {
        value = array[k];

        if (value == nothing) {
            zeros++;
        }
        else if (value < nothing) {
            negatives++;
        }
        else {
            positives++;
        }
    }

    printf("There are %d negatives.\n", negatives);
    printf("There are %d zeros.\n", zeros);
    printf("There are %d positives.\n", positives);

    free(array);
    array = (float*)NULL;

    return program_success_code;
}