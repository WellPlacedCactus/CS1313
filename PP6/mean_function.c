
/*
 * Project #6:  Project 6 Example Program
 * Program:     mean_function
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: Copied directly from slides 22 through 29 from the
 *              slideshow linked below.
 *              http://cs1313.ou.edu/userdeffunc_lesson1.pdf
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ /* main */

   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANTS SUBSECTION
    *
    *   minimum_number_of_elements:
    *       Minimum number of elements possible in an array
    * 
    *   first_element:
    *       Index of the first element in an array
    * 
    *   program_success_code:
    *       Successful return code
    * 
    *   program_failure_code:
    *       Non-successful return code
    * 
    */

    const int minimum_number_of_elements    =  1;
    const int first_element                 =  0;
    const int program_success_code          =  0;
    const int program_failure_code          = -1;

   /*
    * VARIABLES SUBSECTION
    *   
    *   list1_input_value:
    *       Pointer to the elements of the first list
    *   
    *   list2_input_value:
    *       Pointer to the elements of the second list
    *   
    *   mean1:
    *       Mean of the first list
    *   
    *   mean2:
    *       Mean of the second list
    *   
    *   number_of_elements:
    *       Number of elements in each lists
    *   
    *   element:
    *       Current element in the list while iterating
    */

    float*  list1_input_value = (float*)NULL;
    float*  list2_input_value = (float*)NULL;
    float   mean1;
    float   mean2;
    int     number_of_elements;
    int     element;

   /*
    * FUNCTION PROTOTYPES SUBSECTION
    */
    float mean(float* array, int number_of_elements);

   /*
    * EXECUTION SECTION
    */

   /*
    * GREETING SUBSECTION
    */

   /*
    * Greet the user
    */
    printf("I am going to calculate the mean of a pair of list\n");
    printf("values that you will give me. These lists will have\n");
    printf("the same length.\n");

   /*
    * INPUT SUBSECTION
    */

   /*
    * Prompt for the length of each array
    */
    printf("How many values would you like to be in each list?\n");

   /*
    * Input the length of each array
    */
    scanf("%d", &number_of_elements);

   /*
    * Idiotproof the length of each array
    */
    if (number_of_elements < minimum_number_of_elements) {

       /*
        * Display an error message
        */
        printf("You cannot have %d values in a list.\n",
            number_of_elements);

       /*
        * Exit the program
        */
        exit(program_failure_code);

    } /* if (number_of_elements... */

   /*
    * Allocate memory for first array
    */
    list1_input_value = 
        (float*)malloc(sizeof(float) * number_of_elements);

   /*
    * Check if allocation for first array was sucessful
    */
    if (list1_input_value == (float*)NULL) {

       /*
        * Display an error message
        */
        printf("Could not allocate the first float array\n");
        printf("of length %d\n", number_of_elements);

       /*
        * Exit the program
        */
        exit(program_failure_code);

    } /* if (list1_input_value... */

   /*
    * Allocate memory for second array
    */
    list2_input_value = 
        (float*)malloc(sizeof(float) * number_of_elements);

   /*
    * Check if allocation for second array was sucessful
    */
    if (list2_input_value == (float*)NULL) {

       /*
        * Display an error message
        */
        printf("Could not allocate the second float array\n");
        printf("of length %d\n", number_of_elements);

       /*
        * Exit the program
        */
        exit(program_failure_code);

    } /* if (list2_input_value... */

   /*
    * Prompts user for lists of elements
    */
    printf("What are the pairs of lists of length %d that you\n",
        number_of_elements);
    printf("would like to calculate the mean of?\n");

   /*
    * Inputs the two lists of elements
    */
    for (element = first_element;
         element < number_of_elements; element++) {

       /*
        * Input the value at the current element
        */
        scanf("%f %f",
            &list1_input_value[element],
            &list2_input_value[element]);
        
    } /* for element */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Gets mean of first list from function
    */
    mean1 = mean(list1_input_value, number_of_elements);

   /*
    * Gets mean of second list from function
    */
    mean2 = mean(list2_input_value, number_of_elements);

   /*
    * OUTPUT SUBSECTION
    */

   /*
    * Tells user what they are about to see
    */
    printf("The %d pairs of input values are:\n", number_of_elements);

   /*
    * Loops through elements in both lists
    */
    for (element = first_element;
        element < number_of_elements; element++) {

       /*
        * Prints the pair of values at current index
        */
        printf("%f %f\n",
            list1_input_value[element],
            list2_input_value[element]);

    } /* for element */

   /*
    * Displays mean of the first list
    */
    printf("The mean of the first list of %d input values is %f\n",
        number_of_elements, mean1);

   /*
    * Displays mean of the second list
    */
    printf("The mean of the second list of %d input values is %f\n",
        number_of_elements, mean2);

   /*
    * Frees the second list from memory
    */
    free(list2_input_value);

   /*
    * Nullifies the second list pointer
    */
    list2_input_value = (float*)NULL;

   /*
    * Frees the first list from memory
    */
    free(list1_input_value);

   /*
    * Nullifies the first list pointer
    */
    list1_input_value = (float*)NULL;

   /*
    * Exits the program with a successful code
    */
    return program_success_code;

} /* main */


/*
 * Function:        mean
 * Return Type:     float
 * Return Value:    Mean of the given array of float values
 * Arguments:
 *                  array:
 *                      The array of float values
 * 
 *                  number_of_elements:
 *                      The length of the previous parameter
 * 
 * Description:     Calculates the mean of the given list of numbers
 *                  by adding up the elements and then dividing by the
 *                  length.
 * 
 */
float mean(float* array, int number_of_elements)
{ /* mean */

   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   initial_sum:
    *       Zero because nothing is known about the list
    * 
    *   minimum_number_of_elements:
    *       Minimum possible number of elements in an array
    * 
    *   first_element:
    *       Index of the first element of an array
    * 
    *   program_failure_code:
    *       Bad return code for when something goes wrong
    * 
    */
    const float     initial_sum                 =  0.0;
    const int       minimum_number_of_elements  =  1;
    const int       first_element               =  0;
    const int       program_failure_code        = -1;

   /*
    * VARIABLE SUBSECTION
    * 
    *   sum:
    *       Sum of all the values in the list
    * 
    *   mean_value:
    *       Mean of all the values in the list
    * 
    *   element:
    *       Variable of iteration for looping through the list
    * 
    */
    float   sum;
    float   mean_value;
    int     element;
    
   /*
    * EXECUTION SECTION
    */

   /*
    * IDIOT SUBSECTION
    */

   /*
    * Idiotproof the number of elements
    */
    if (number_of_elements < minimum_number_of_elements) {

       /*
        * Display an error message
        */
        printf("You cannot have an array of length %d\n",
            number_of_elements);
        printf("It must have at least %d elements\n",
            minimum_number_of_elements);

       /*
        * Exit the program
        */
        exit(program_failure_code);

    } /* if (number_of_elements < ...) */

   /*
    * Idiotproof the array
    */
    if (array == (float*)NULL) {

       /*
        * Display an error message
        */
        printf("The array does not exist...\n");

       /*
        * Exit the program
        */
        exit(program_failure_code);

    } /* if (array...) */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Set the sum to nothing
    */
    sum = initial_sum;

   /*
    * Loop through the array
    */
    for (element = first_element;
        element < number_of_elements; element++) {

       /*
        * Add the current element to the total sum
        */
        sum = sum + array[element];

    } /* for element */

   /*
    * Calculate the mean from the sum
    */
    mean_value = sum / number_of_elements;

   /*
    * Return the mean
    */
    return mean_value;

} /* mean */