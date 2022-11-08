
/*
 * Project #5:  Big Statistics Calculator
 * Program:     big_stats
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: Same program from Programming Project 3 except it
 *              makes use of arrays to make calculations easier.
 *              Generates simple statistics calculations using two
 *              lists of numbers provided through user input by the
 *              client.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   /*
    * DECLARATION SECTION
    */

    const float nothing_float = 0.0;
    const int nothing_int = 0;
    const int program_succ_code = 0;
    const int program_fail_code = -1;

    float* list1 = (float*)NULL;
    float* list2 = (float*)NULL;
    float mean1;
    float mean2;
    float variance1;
    float variance2;
    float standard_deviation1;
    float standard_deviation2;
    float standard_error1;
    float standard_error2;
    float sum1;
    float sum2;
    float sum_squares1;
    float sum_squares2;
    float variance_numerator1;
    float variance_numerator2;
    float sum_products;
    float correlation_coefficient_numerator;
    float correlation_coefficient_denominator;
    float correlation_coefficient;
    int control;
    int length;

   /*
    * EXECUTION SECTION
    */

   /*
    * INPUT SUBSECTION
    */

    scanf("%d", &length);
    if (length <= nothing_int) {
        printf("ERROR: Idiocy detected. You cannot have a length\n");
        printf("of %d", length);
        exit(program_fail_code);
    }

    list1 = (float*)malloc(sizeof(float) * length);
    if (list1 == (float*)NULL) {
        printf("ERROR: Could not allocate memory for a list of\n");
        printf("length %d\n", length);
        exit(program_fail_code);
    }

    list2 = (float*)malloc(sizeof(float) * length);
    if (list2 == (float*)NULL) {
        printf("ERROR: Could not allocate memory for a list of\n");
        printf("length %d\n", length);
        exit(program_fail_code);
    }

    for (control = nothing_int; control < length; control++) {
        scanf("%f %f",
            &list1[control],
            &list2[control]);
    }

   /*
    * CALCULATION SUBSECTION
    */

    sum1 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        sum1 += list1[control];
    }
    mean1 = sum1 / length;
    variance_numerator1 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        variance_numerator1 += pow(list1[control] - mean1, 2);
    }
    variance1 = variance_numerator1 / (length - 1);
    standard_deviation1 = sqrt(variance1);
    standard_error1 = standard_deviation1 / sqrt(length);

    sum2 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        sum2 += list1[control];
    }
    mean2 = sum2 / length;
    variance_numerator2 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        variance_numerator2 += pow(list2[control] - mean2, 2);
    }
    variance2 = variance_numerator2 / (length - 1);
    standard_deviation2 = sqrt(variance2);
    standard_error2 = standard_deviation2 / sqrt(length);

    sum_squares1 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        sum_squares1 += pow(list1[control], 2);
    }
    sum_squares2 = nothing_float;
    for (control = nothing_int; control < length; control++) {
        sum_squares2 += pow(list2[control], 2);
    }
    sum_products = nothing_float;
    for (control = nothing_int; control < length; control++) {
        sum_products += list1[control] * list2[control];
    }
    correlation_coefficient_numerator = (length *
                                         sum_products -
                                         sum1 *
                                         sum1);
    correlation_coefficient_denominator = (sqrt(length * sum_squares1 -
                                                sum1 * sum1) *
                                           sqrt(length * sum_squares2 -
                                                sum2 * sum2));
    correlation_coefficient = (correlation_coefficient_numerator /
                               correlation_coefficient_denominator);

   /*
    * OUTPUT SUBSECTION
    */

    printf("The length of the lists is %d\n", length);
    printf("The elements of the first list:\n");
    for (control = nothing_int; control < length; control++) {
        printf("%f\n", list1[control]);
    }
    printf("The elements of the second list:\n");
    for (control = nothing_int; control < length; control++) {
        printf("%f\n", list2[control]);
    }
    printf("The mean of the first list is %f\n", mean1);
    printf("The varaince of the first list is %f\n", variance1);
    printf("The standard deviation of the first list is %f\n", standard_deviation1);
    printf("The standard error of the first list is %f\n", standard_error1);
    printf("The mean of the second list is %f\n", mean2);
    printf("The varaince of the second list is %f\n", variance2);
    printf("The standard deviation of the second list is %f\n", standard_deviation2);
    printf("The standard error of the second list is %f\n", standard_error2);
    printf("The correlation coefficient of the lists is %f\n", correlation_coefficient);

    free(list2);
    list2 = (float*)NULL;
    free(list1);
    list1 = (float*)NULL;

    return program_succ_code;
}