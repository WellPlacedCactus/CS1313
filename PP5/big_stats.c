
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

   /*
    * NAMED CONSTANT SUBSECTION
    *
    *   nothing_float:
    *       The constant representing the number zero in float form
    * 
    *   nothing_int:
    *       The constant representing the number zero in int form
    * 
    *   program_succ_code:
    *       The return code representing a successful exit
    * 
    *   program_fail_code:
    *       The return code representing a failed exit
    */

    const float nothing_float       = 0.0;
    const int   nothing_int         = 0;
    const int   program_succ_code   = 0;
    const int   program_fail_code   = -1;

   /*
    * VARIABLE SUBSECTION
    *
    *   list1:
    *       A pointer to an array representing the first list of
    *       the user's inputted values
    * 
    *   list2:
    *       A pointer to an array representing the second list of
    *       the user's inputted values
    * 
    *   mean1:
    *       The numerical value representing the mean
    *       of the first list
    * 
    *   mean2:
    *       The numerical value representing the mean
    *       of the second list
    * 
    *   variance1:
    *       The numerical value representing the variance
    *       of the first list
    * 
    *   variance2:
    *       The numerical value representing the variance
    *       of the second list
    * 
    *   standard_deviation1:
    *       The numerical value representing the standard deviation
    *       of the first list
    * 
    *   standard_deviation2:
    *       The numerical value representing the standard deviation
    *       of the second list
    * 
    *   standard_error1:
    *       The numerical value representing the standard error
    *       of the first list
    * 
    *   standard_error2:
    *       The numerical value representing the standard error
    *       of the second list
    * 
    *   sum1:
    *       The numerical value representing the sum
    *       of the first list
    * 
    *   sum2:
    *       The numerical value representing the sum
    *       of the second list
    * 
    *   sum_squares1:
    *       The numerical value representing the sum
    *       of the squares of the first list
    * 
    *   sum_squares2:
    *       The numerical value representing the sum
    *       of the squares of the second list
    * 
    *   variance_numerator1:
    *       The numerical value representing the numerator
    *       of the variance of the first list
    * 
    *   variance_numerator2:
    *       The numerical value representing the numerator
    *       of the variance of the second list
    * 
    *   sum_products:
    *       The numerical value representing the sum
    *       of the products of both lists
    * 
    *   correlation_coefficient_numerator:
    *       The numerical value representing the numerator of the
    *       correlation coefficient of both lists
    * 
    *   correlation_coefficient_denominator:
    *       The numerical value representing the denominator of the
    *       correlation coefficient of both lists
    * 
    *   correlation_coefficient:
    *       The numerical value representing the
    *       correlation coefficient of both lists
    * 
    *   control:
    *       An integer used as the control variable in all the for loops
    *       written in this program
    * 
    *   length:
    *       An integer representing the number of elements of both
    *       of the user's inputted lists
    * 
    */

    float*  list1                   = (float*)NULL;
    float*  list2                   = (float*)NULL;
    float   mean1;
    float   mean2;
    float   variance1;
    float   variance2;
    float   standard_deviation1;
    float   standard_deviation2;
    float   standard_error1;
    float   standard_error2;
    float   sum1;
    float   sum2;
    float   sum_squares1;
    float   sum_squares2;
    float   variance_numerator1;
    float   variance_numerator2;
    float   sum_products;
    float   correlation_coefficient_numerator;
    float   correlation_coefficient_denominator;
    float   correlation_coefficient;
    int     control;
    int     length;

   /*
    * EXECUTION SECTION
    */

   /*
    * INPUT SUBSECTION
    */

   /*
    * Input the number of elements of both lists
    */
    scanf("%d", &length);

   /*
    * Idiotproof the number of elements of both lists
    */
    if (length <= nothing_int) {

       /*
        * Prints out a relevant error message
        */
        printf("ERROR: Idiocy detected. You cannot have a length\n");
        printf("of %d", length);

       /*
        * Exits the program with a bad return code
        */
        exit(program_fail_code);

    } /* if (length <= nothing_int) */

   /*
    * Allocates memory for the first array
    */
    list1 = (float*)malloc(sizeof(float) * length);

   /*
    * Checks if first array memory allocation was successful
    */
    if (list1 == (float*)NULL) {

       /*
        * Prints out a relevant error message
        */
        printf("ERROR: Could not allocate memory for a list of\n");
        printf("length %d\n", length);

       /*
        * Exits the program with a bad return code
        */
        exit(program_fail_code);

    } /* if (list1 == (float*)NULL) */

   /*
    * Allocates memory for the second array
    */
    list2 = (float*)malloc(sizeof(float) * length);

   /*
    * Checks if second array memory allocation was successful
    */
    if (list2 == (float*)NULL) {

       /*
        * Prints out a relevant error message
        */
        printf("ERROR: Could not allocate memory for a list of\n");
        printf("length %d\n", length);

       /*
        * Exits the program with a bad return code
        */
        exit(program_fail_code);

    } /* if (list2 == (float*)NULL) */

   /*
    * Inputs all of the elements of both lists by iteration
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Inputs the list pair at the current element index
        */
        scanf("%f %f",
            &list1[control],
            &list2[control]);

    } /* for control */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Sets the sum of the first list to nothing
    */
    sum1 = nothing_float;

   /*
    * Calculates the sum of the first list
    */
    for (control = nothing_int; control < length; control++) {
        
       /*
        * Adds the current element to the total
        */
        sum1 += list1[control];

    } /* for control */

   /*
    * Calculates the mean of the first list
    */
    mean1 = sum1 / length;

   /*
    * Sets the variance numerator of the first list to nothing
    */
    variance_numerator1 = nothing_float;

   /*
    * Calculates the variance numeartor for the first list
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Adds the square of the quantity of the distance of the
        * current element from the mean to the total
        */
        variance_numerator1 += pow(list1[control] - mean1, 2);

    } /* for control */

   /*
    * Calculates the variance of the first list
    */
    variance1 = variance_numerator1 / (length - 1);

   /*
    * Calculates the standard deviation of the first list
    */
    standard_deviation1 = sqrt(variance1);

   /*
    * Calculates the standard error of the first list
    */
    standard_error1 = standard_deviation1 / sqrt(length);

   /*
    * Sets the sum of the second list to nothing
    */
    sum2 = nothing_float;

   /*
    * Calculates the sum of the second list
    */
    for (control = nothing_int; control < length; control++) {
   
       /*
        * Adds the current element in the second list to the total
        */
        sum2 += list2[control];

    } /* for control */

   /*
    * Calculates the mean of the second list
    */
    mean2 = sum2 / length;

   /*
    * Sets the variance numerator of the second list to nothing
    */
    variance_numerator2 = nothing_float;

   /*
    * Calculates the variance numerator of the second list
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Adds the square of the quantity of the distance of the
        * current element from the mean to the total
        */
        variance_numerator2 += pow(list2[control] - mean2, 2);

    } /* for control */

   /*
    * Calculates the variance of the second list
    */
    variance2 = variance_numerator2 / (length - 1);

   /*
    * Calculates the standard deviation of the second list
    */
    standard_deviation2 = sqrt(variance2);

   /*
    * Calculates the standard error of the second list
    */
    standard_error2 = standard_deviation2 / sqrt(length);

   /*
    * Sets the sum of squares of the first list to zero
    */
    sum_squares1 = nothing_float;

   /*
    * Calculates the sum of squares for the first list
    */
    for (control = nothing_int; control < length; control++) {
        
       /*
        * Adds the square of the current element to the total
        */
        sum_squares1 += pow(list1[control], 2);

    } /* for control */

   /*
    * Calculates the sum of squares for the second list
    */
    sum_squares2 = nothing_float;

   /*
    * Calculates the sum of squares for the second list
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Adds the square of the current element to the total
        */
        sum_squares2 += pow(list2[control], 2);

    } /* for control */

   /*
    * Sets the sum of the products to zero
    */
    sum_products = nothing_float;

   /*
    * Calculates the multidimentional dot product of the two lists
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Adds the product of the two current elements to the total
        */
        sum_products += list1[control] * list2[control];

    } /* for control */

   /*
    * Calculates the numerator of the correlation coefficient
    */
    correlation_coefficient_numerator = (length *
        sum_products - sum1 * sum2);

   /*
    * Calculates the denominator of the correlation coefficient
    */
    correlation_coefficient_denominator = sqrt(
        (length * sum_squares1 - pow(sum1, 2)) *
        (length * sum_squares2 - pow(sum2, 2))
    );

   /*
    * Calculates the correlation coefficient
    */
    correlation_coefficient = (correlation_coefficient_numerator /
        correlation_coefficient_denominator);

   /*
    * OUTPUT SUBSECTION
    */

   /*
    * Display the number of elements in each array
    */
    printf("The length of the lists is %d\n", length);

   /*
    * Prepare to display the first list
    */
    printf("The elements of the first list:\n");

   /*
    * Loop through the elements in first list to display
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Display the current element
        */
        printf("%f\n", list1[control]);

    } /* for control */

   /*
    * Prepare to display the second list
    */
    printf("The elements of the second list:\n");

   /*
    * Loop through the elements in second list to display
    */
    for (control = nothing_int; control < length; control++) {

       /*
        * Display the current element
        */
        printf("%f\n", list2[control]);

    } /* for control */

   /*
    * Display first list stats
    */
    printf("The mean of the first list is %f\n", mean1);
    printf("The varaince of the first list is %f\n", variance1);
    printf("The standard deviation of the first list is %f\n", standard_deviation1);
    printf("The standard error of the first list is %f\n", standard_error1);
    
   /*
    * Display second list stats
    */
    printf("The mean of the second list is %f\n", mean2);
    printf("The varaince of the second list is %f\n", variance2);
    printf("The standard deviation of the second list is %f\n", standard_deviation2);
    printf("The standard error of the second list is %f\n", standard_error2);
    
   /*
    * Display both list stats
    */
    printf("The correlation coefficient of the lists is %f\n", correlation_coefficient);

   /*
    * Deallocate second list
    */
    free(list2);

   /*
    * Nullify second list pointer
    */
    list2 = (float*)NULL;

   /*
    * Deallocate first list
    */
    free(list1);

   /*
    * Nullify first list pointer
    */
    list1 = (float*)NULL;

   /*
    * Return a healthy code
    */
    return program_succ_code;

} /* main */