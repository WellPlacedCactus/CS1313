
/*
 * Project #6:  Big Statistics Calculator With Functions
 * Program:     big_statistics_function
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: Same program from Programming Project 5 except it
 *              makes use of functions to make calculations easier.
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

    const float nothing_float       =  0.0;
    const int   nothing_int         =  0;
    const int   program_succ_code   =  0;
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
    *   correlation_coefficient_both:
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
    float   correlation_coefficient_both;
    int     control;
    int     length;

   /*
    * FUNCTION PROTOTYPE SUBSECTION
    */

    float mean(float* list, int length);
    float variance(float* list, int length, float mean);
    float standard_deviation(float variance);
    float standard_error(float standard_deviation, int length);
    float correlation_coefficient(float* list1, float* list2,
        int length);

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
        printf("of %d\n", length);

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
    * Perform calculations for the first list
    */
    mean1 = mean(list1, length);
    variance1 = variance(list1, length, mean1);
    standard_deviation1 = standard_deviation(variance1);
    standard_error1 = standard_error(standard_deviation1, length);

   /*
    * Perform calculations for the second list
    */
    mean2 = mean(list2, length);
    variance2 = variance(list2, length, mean2);
    standard_deviation2 = standard_deviation(variance2);
    standard_error2 = standard_error(standard_deviation2, length);

   /*
    * Perform correlation calculation
    */
    correlation_coefficient_both = correlation_coefficient(list1,
        list2, length);

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
    printf("The correlation coefficient of the lists is %f\n", correlation_coefficient_both);

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


/*
 * Function:        mean
 * Return Type:     float
 * Return Value:    The mean of the given list
 * Arguments:
 *                  list:
 *                      A pointer to the given list
 *                  length:
 *                      The length of the given list
 * 
 * Description:     Calculates the mean of the given list by dividing
 *                  the sum of the list by the length of the list
 *
 */
float mean(float* list, int length)
{ /* mean */

   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   initial_sum:
    *       Number representing nothing
    * 
    *   first_element:
    *       Index of first element in any array
    * 
    *   minimum_elements:
    *       Minimum number of elements in any array
    * 
    *   program_fail_code:
    *       Bad return code
    * 
    */
    const float     initial_sum         =  0.0;
    const int       first_element       =  0;
    const int       minimum_elements    =  1;
    const int       program_fail_code   = -1;

   /*
    * VARIABLE SUBSECTION
    * 
    *   sum:
    *       Sum of the list
    * 
    *   mean:
    *       Mean of the list
    * 
    *   control:
    *       Control variable for the loop
    * 
    */
    float   sum;
    float   mean;
    int     control;

   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiot proof length parameter
    */
    if (length < minimum_elements) {

       /*
        * Display error message
        */
        printf("You cannot have %d elements\n", length);
        printf("It must be longer than %d\n", minimum_elements);

       /*
        * Exit the program
        */
        exit(program_fail_code);

    } /* if (length... */

   /*
    * Idiot proof list parameter
    */
    if (list == (float*)NULL) {

       /*
        * Display error message
        */
        printf("The list does not exist\n");

       /*
        * Exit the program
        */
        exit(program_fail_code);

    } /* if (list */

   /*
    * CALCULATION SUBSECTION
    */

    sum = initial_sum;

    for (control = first_element;
        control < length; control++) {
        
       /*
        * Adds current element to the total sum
        */
        sum += list[control];

    } /* for control */

   /*
    * Calculates mean of the list
    */
    mean = sum / length;

   /*
    * Returns value calculated above
    */
    return mean;

} /* mean */

/*
 * Function:        variance
 * Return Type:     float
 * Return Value:    The variance of the given list
 * Arguments:
 *                  list:
 *                      A pointer to the given list
 *                  length:
 *                      The length of the given list
 *                  mean:
 *                      The mean of the given list
 * 
 * Description:     Calculates the variance of the given list by
 *                  calculating the numerator and denominator of the
 *                  variance and then dividing them
 *
 */
float variance(float* list, int length, float mean)
{ /* variance */
   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   nothing:
    *       Number representing zero
    * 
    *   identity:
    *       Number representing one
    * 
    *   doubler:
    *       Number representing two
    * 
    *   fail:
    *       Bad program return code
    * 
    */
    const int nothing   =  0;
    const int identity  =  1;
    const int doubler   =  2;
    const int fail      = -1;

   /*
    * VARIABLE SUBSECTION
    * 
    *   variance_numerator:
    *       Numerator of the variance of the list
    * 
    *   variance_denominator:
    *       Denominator of the variance of the list
    * 
    *   variance:
    *       Variance of list to be returned
    * 
    *   current:
    *       Control variable for the loop
    * 
    */
    float   variance_numerator      = 0;
    float   variance_denominator    = 0;
    float   variance                = 0;
    int     current                 = 0;

   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiot proof list
    */
    if (list == (float*)NULL) {

       /*
        * Display error message
        */
        printf("The list does not exist\n");

       /*
        * Exits the program
        */
        exit(fail);

    } /* if (list... */

   /*
    * Idiot proof length
    */
    if (length < identity) {

       /*
        * Display error message
        */
        printf("List of length %d cannot exist\n", length);

       /*
        * Exit program
        */
        exit(fail);

    } /* if (length... */

   /*
    * Idiot proof mean
    */
    if (mean < nothing) {

       /*
        * Display error message
        */
        printf("Mean of %f cannot exist\n", mean);

       /*
        * Exit program
        */
        exit(fail);

    } /* if (mean... */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Calculates variance numerator
    */
    for (current = nothing;
        current < length; current++) {

       /*
        * Adds the square of the difference of the current value and
        * mean to the numerator of the variance
        */
        variance_numerator += pow(list[current] - mean, doubler);

    } /* for current */

   /*
    * Calculates variance denominator
    */
    variance_denominator = length - identity;

   /*
    * Calculates variance
    */
    variance = variance_numerator / variance_denominator;

   /*
    * Returns variance
    */
    return variance;

} /* variance */

/*
 * Function:        standard_deviation
 * Return Type:     float
 * Return Value:    The standard deviation of the given variance
 * Arguments:
 *                  variance:
 *                      The variance of any list
 * 
 * Description:     Calculates a standard deviation with a variance
 *                  by taking the square root of it
 *
 */
float standard_deviation(float variance)
{ /* standard_deviation */
   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   program_fail:
    *       Bad return code for the program
    * 
    *   minimum_variance:
    *       Minimum possible value for the variance parameter
    */
    const int program_fail      = -1;
    const int minimum_variance  =  0;

   /*
    * VARIABLE SUBSECTION
    *
    *   standard_deviation:
    *       Standard deviation of the variance, will be returned post
    *       calculation
    */
    float standard_deviation = 0;

   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiot proof variance parameter
    */
    if (variance < minimum_variance) {

       /*
        * Display error message
        */
        printf("You cannot have a variance of %d\n", variance);

       /*
        * Exit program
        */
        exit(program_fail);


    } /* if (variance... */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Calculate standard deviation from variance
    */
    standard_deviation = sqrt(variance);

   /*
    * Return the calculation performed above
    */
    return standard_deviation;

} /* standard_deviation */

/*
 * Function:        standard_error
 * Return Type:     float
 * Return Value:    The standard error of the given standard deviation
 * Arguments:
 *                  standard_deviation:
 *                      The standard deviation of a set of numbers
 *                  length:
 *                      The length of the set of numbers
 * 
 * Description:     Calculates a standard error given a standard
 *                  deviation and a length
 *
 */
float standard_error(float standard_deviation, int length)
{ /* standard_error */

   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    *
    *   program_fail:
    *       Bad return code for the program
    *
    *   nothing:
    *       Number representing zero
    *
    *   something:
    *       Number representing one
    * 
    */
    const int program_fail      = -1;
    const int nothing           =  0;
    const int something         =  1;

   /*
    * VARIABLE SUBSECTION
    * 
    *   standard_error_numerator:
    *       Numerator of the standard error
    * 
    *   standard_error_denominator:
    *       Denominator of the standard error
    * 
    *   standard_error:
    *       Numerator divided by the denominator of the standard error
    * 
    */
    float standard_error_numerator      = 0;
    float standard_error_denominator    = 0;
    float standard_error                = 0;

   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiot proof standard deviation parameter
    */
    if (standard_deviation < nothing) {

       /*
        * Display error message
        */
        printf("You cannot have a standard deviation less than %d\n",
            nothing);

       /*
        * Exit program
        */
        exit(program_fail);

    } /* if (standard_deviation... */

   /*
    * Idiot proof length parameter
    */
    if (length < something) {

       /*
        * Display error message
        */
        printf("You cannot have a length less than %d\n",
            something);

       /*
        * Exit program
        */
        exit(program_fail);

    } /* if (length... */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Calculate the parts
    */
    standard_error_numerator = standard_deviation;
    standard_error_denominator = sqrt(length);

   /*
    * Calculate the whole
    */
    standard_error = standard_error_numerator /
                     standard_error_denominator;

   /*
    * Return the above calculation
    */
    return standard_error;

} /* standard_error */

/*
 * Function:        correlation_coefficient
 * Return Type:     float
 * Return Value:    The correlation coefficient of two given lists of
 *                  numbers
 * Arguments:
 *                  list1:
 *                      A pointer to the first list of numbers
 *                  list2:
 *                      A pointer to the second list of numbers
 *                  length:
 *                      The length of each of the lists mentioned above
 * 
 * Description:     Calculates the correlation coefficient of two lists
 *                  given through the parameters
 *
 */
float correlation_coefficient(float* list1, float* list2, int length)
{ /* correlation_coefficient */

   /*
    * DECLARATION SECTION
    */
    
   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   nothing:
    *       Number representing zero
    * 
    *   something:
    *       Number representing one
    * 
    *   doubler:
    *       Number representing two
    * 
    *   program_fail:
    *       Bad program return code
    *       
    */
    const int nothing           =  0;
    const int something         =  1;
    const int doubler           =  2;
    const int program_fail      = -1;

   /*
    * VARIABLE SUBSECTION
    * 
    *   numerator:
    *       Numerator of the correlation coefficient
    * 
    *   denominator:
    *       Denominator of the correlation coefficient
    * 
    *   correlation:
    *       Correlation coefficient of the given lists
    * 
    *   sum1:
    *       Sum of elements in the first list
    * 
    *   sum2:
    *       Sum of elements in the second list
    * 
    *   sum_squares1:
    *       Sum of elements squared in the first list
    * 
    *   sum_squares2:
    *       Sum of elements squared in the second list
    * 
    *   sum_products:
    *       Sum of product of elements in both lists
    * 
    *   element:
    *       Control variable for loops in function
    * 
    */
    float   numerator         = 0;
    float   denominator       = 0;
    float   correlation       = 0;
    float   sum1              = 0;
    float   sum2              = 0;
    float   sum_squares1      = 0;
    float   sum_squares2      = 0;
    float   sum_products      = 0;
    int     element           = 0;

   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiotproof first pointer
    */
    if (list1 == (float*)NULL) {

       /*
        * Display error message
        */
        printf("The first list pointer points to nothing\n");

       /*
        * Exit program
        */
        exit(program_fail);

    } /* if (list1... */

   /*
    * Idiotproof second pointer
    */
    if (list2 == (float*)NULL) {

       /*
        * Display error message
        */
        printf("The second list pointer points to nothing\n");

       /*
        * Exit program
        */
        exit(program_fail);

    } /* if (list2... */

   /*
    * Idiotproof length
    */
    if (length < something) {

       /*
        * Display error message
        */
        printf("Cannot have a length less than %d\n", something);

       /*
        * Exit program
        */
        exit(program_fail);

    } /* if (length... */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Calculate sum of the first list
    */
    for (element = nothing; element < length; element++) {

       /*
        * Add current element to sum
        */
        sum1 += list1[element];

    } /* for element */

   /*
    * Calculate sum of the second list
    */
    for (element = nothing; element < length; element++) {

       /*
        * Add current element to sum
        */
        sum2 += list2[element];

    } /* for element */

   /*
    * Calculate sum of squares of the first list
    */
    for (element = nothing; element < length; element++) {

       /*
        * Add square of current element to sum
        */
        sum_squares1 += pow(list1[element], doubler);

    } /* for element */

   /*
    * Calculate sum of squares of the second list
    */
    for (element = nothing; element < length; element++) {

       /*
        * Add square of current element to sum
        */
        sum_squares2 += pow(list2[element], doubler);

    } /* for element */

   /*
    * Calculate multi-dimentional dot product of both lists
    */
    for (element = nothing; element < length; element++) {

       /*
        * Add product of both elements at current index to sum
        */
        sum_products += list1[element] * list2[element];

    } /* for element */

   /*
    * Calculate numerator of correlation coefficient
    */
    numerator = length * sum_products - sum1 * sum2;

   /*
    * Calculate denominator of correlation coefficient
    */
    denominator = sqrt(length * sum_squares1 - pow(sum1, doubler)) *
                  sqrt(length * sum_squares2 - pow(sum2, doubler));

   /*
    * Calculate correlation coefficient
    */
    correlation = numerator / denominator;

   /*
    * Return the calculation performed above
    */
    return correlation;

} /* correlation_coefficient */