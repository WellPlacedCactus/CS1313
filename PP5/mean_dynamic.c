
/* 
 * Project #5:  Project 5 Example Program
 * Program:     mean_dynamic
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: Copied directly from slide 18 of the slideshow linked
 *              below.
 *              http://cs1313.ou.edu/array_lesson3.pdf
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ /* main */

   /*
    * DECLARATION SECTION
    */

   /*
    * NAMED CONSTANT SUBSECTION
    * 
    *   initial_sum:
    *       The number representing the sum of the list initially
    * 
    *   minimum_number_of_elements:
    *       The number of elements inside an array
    * 
    *   first_element:
    *       The number representing the first index of an array
    * 
    *   program_success_code:
    *       The return code that represents a success
    * 
    *   program_failure_code:
    *       The return code that represents a failure
    */

    const float initial_sum = 0.0;
    const int   minimum_number_of_elements = 1;
    const int   first_element = 0;
    const int   program_success_code = 0;
    const int   program_failure_code = -1;

   /*
    * VARIABLE SUBSECTION
    *
    *   list1_input_value:
    *       The array representing the first list of numbers
    * 
    *   list2_input_value:
    *       The array representing the second list of numbers
    * 
    *   list1_input_value_sum:
    *       The numerical value representing the sum of the first list
    *
    *   mean1:
    *       The numerical value representing the mean of the first list
    * 
    *   list2_input_value_sum:
    *       The numerical value representing the sum of the second list
    * 
    *   mean2:
    *       The numerical value representing the mean of the second
    *       list
    * 
    *   number_of_elements:
    *       The numerical value representing the number of elements in
    *       each list
    * 
    *   element:
    *       An in used as the control variable in all of the for loops
    */

    float*  list1_input_value = (float*)NULL;
    float*  list2_input_value = (float*)NULL;
    float   list1_input_value_sum, mean1;
    float   list2_input_value_sum, mean2;
    int     number_of_elements;
    int     element;

   /*
    * EXECUTION SECTION
    */

   /*
    * GREETING SUBSECTION
    */

   /*
    * Greets the user
    */
    printf("I am going to calculate the mean of a pair of lists of\n");
    printf("values that you input. These lists will have the same\n");
    printf("input length.\n");

   /*
    * INPUT SUBSECTION
    */

   /*
    * Prompts the user for the number of elements in each list
    */
    printf("How many values would you like to calculate the mean\n");
    printf("in each list?\n");

   /*
    * Inputs the number of elements in each list
    */
    scanf("%d", &number_of_elements);

   /*
    * Idiotproof the number of elements
    */
    if (number_of_elements < minimum_number_of_elements) {
        
       /*
        * Print out a relevant error message
        */
        printf("ERROR: You cannot calculate the mean of %d values.\n",
            number_of_elements);

       /*
        * Exits the program
        */
        exit(program_failure_code);

    } /* if (number_of_elements... */

   /*
    * Allocates memory for the first list using the number of elements
    */
    list1_input_value = (float*)malloc(sizeof(float) * number_of_elements);
    
   /*
    * Checks if memory allocation was successful
    */
    if (list1_input_value == (float*)NULL) {

       /*
        * Prints out a relevant error message
        */
        printf("ERROR: Could not allocate the first float array\n");
        printf("of length %d.\n", number_of_elements);
        
       /*
        * Exits the program
        */
        exit(program_failure_code);

    } /* if (list1_input_value... */

   /*
    * Allocates memory for the second list
    */
    list2_input_value = (float*)malloc(sizeof(float) * number_of_elements);

   /*
    * Checks if memory allocation was successful
    */
    if (list2_input_value == (float*)NULL) {

       /*
        * Prints out a relevant error message
        */
        printf("ERROR: Could not allocate the second float array\n");
        printf("of length %d.\n", number_of_elements);

       /*
        * Exits the program
        */
        exit(program_failure_code);

    } /* if (list2_input_value... */

   /*
    * Prompts the user of the number pairs in lists
    */
    printf("What are the pairs of lists of %d values to calculate\n",
        number_of_elements);
    printf("the mean of?\n");

   /*
    * Iterates over the list
    */
    for (element = first_element;
        element < number_of_elements; element++) {

       /*
        * Inputs the value pair at the index of element
        */
        scanf("%f %f",
            &list1_input_value[element],
            &list2_input_value[element]);

    } /* for element */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Sets the sum of the first list to nothing
    */
    list1_input_value_sum = initial_sum;
    
   /*
    * Iterates over the first list
    */
    for (element = first_element;
        element < number_of_elements; element++) {

       /*
        * Adds the current element to the total sum
        */
        list1_input_value_sum += list1_input_value[element];

    } /* for element */

   /*
    * Calculates the mean of the first list
    */
    mean1 = list1_input_value_sum / number_of_elements;

   /*
    * Sets the sum of list two to nothing
    */
    list2_input_value_sum = initial_sum;

   /*
    * Loops through each element in the second list
    */
    for (element = first_element;
        element < number_of_elements; element++) {

       /*
        * Adds the current element to the sum of the two lists
        */
        list2_input_value_sum += list2_input_value[element];

    } /* for element */

   /*
    * Calculates the mean of the second list
    */
    mean2 = list2_input_value_sum / number_of_elements;

   /*
    * OUTPUT SUBSECTION
    */

   /*
    * Prepares the user to see the two lists
    */
    printf("There %d pairs of input values are:\n", number_of_elements);

   /*
    * Loops through both lists
    */
    for (element = first_element;
        element < number_of_elements; element++) {
        
       /*
        * Prints the values of each list at the index of element
        */
        printf("%f %f\n",
            list1_input_value[element],
            list2_input_value[element]);

    } /* for element */

   /*
    * Outputs the means of both lists
    */
    printf("The mean of the first list is %f\n", mean1);
    printf("The mean of the second list is %f\n", mean2);

   /*
    * Frees the values of list two from memory
    */
    free(list2_input_value);

   /*
    * Sets the pointer of list two to null
    */
    list2_input_value = (float*)NULL;

   /*
    * Frees the values of list one from memory
    */
    free(list1_input_value);
    
   /*
    * Sets the pointer of list one to null
    */
    list1_input_value = (float*)NULL;

   /*
    * Returns a successful code
    */
    return program_success_code;

} /* main */