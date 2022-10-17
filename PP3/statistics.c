
/*
 *  Project #3:   Ghetto Statistics Calculator
 *  Program:      statistics
 *  Author:       Nathan Vu (nathan.v.vu-1@ou.edu)
 *  Class:        CS1313 010 Programming for Non-Majors in C
 *  Lab:          Sec 010 Fridays 10:30am
 *  Description:  Generates simple statistics calculations using two
 *                lists of numbers provided through user input by the
 *                client.
 */

#include <stdio.h>
#include <math.h>

int main()
{ /* main */

 /*
  * DECLARATION SECTION
  */

 /*
  * NAMED CONSTANT SUBSECTION
  * 
  * length_of_a_single_list:
  *                             The length of a single list given by the
  *                             user should be this.
  * multiplicative_identity:
  *                             The value representing the invisble
  *                             number behind every mathematical value
  *                             should be this.
  */

  const int length_of_a_single_list = 5;
  const int multiplicative_identity = 1;

 /*
  * VARIABLE SUBSECTION
  * 
  * value_of_first_list_at_index_0:
  *                                           The first value of the
  *                                           first list should be
  *                                           this.
  * value_of_first_list_at_index_1:
  *                                           The second value of the
  *                                           first list should be
  *                                           this.
  * value_of_first_list_at_index_2:
  *                                           The third value of the
  *                                           first list should be
  *                                           this.
  * value_of_first_list_at_index_3:
  *                                           The fourth value of the
  *                                           first list should be
  *                                           this.
  * value_of_first_list_at_index_4:
  *                                           The fifth value of the
  *                                           first list should be
  *                                           this.
  * 
  * value_of_second_list_at_index_0:
  *                                           The first value of the
  *                                           second list should be
  *                                           this.
  * value_of_second_list_at_index_1:
  *                                           The second value of the
  *                                           second list should be
  *                                           this.
  * value_of_second_list_at_index_2:
  *                                           The third value of the
  *                                           second list should be
  *                                           this.
  * value_of_second_list_at_index_3:
  *                                           The fourth value of the
  *                                           second list should be
  *                                           this.
  * value_of_second_list_at_index_4:
  *                                           The fifth value of the
  *                                           second list should be
  *                                           this.
  * 
  * mean_of_first_list:
  *                                           The sum of all the values
  *                                           of the first list divided
  *                                           by the length of that list
  *                                           should be this.
  * mean_of_second_list:
  *                                           The sum of all the values
  *                                           of the second list divided
  *                                           by the length of that list
  *                                           should be this.
  * 
  * variance_of_first_list:
  *                                           The quantity representing
  *                                           the bias-corrected sample
  *                                           variance of the first
  *                                           list should be this.
  * variance_of_second_list:
  *                                           The quantity representing
  *                                           the bias-corrected sample
  *                                           variance of the second
  *                                           list should be this.
  * 
  * standard_deviation_of_first_list:
  *                                           The quantity representing
  *                                           the bias-corrected standard
  *                                           deviation of the first
  *                                           list should be this.
  * standard_deviation_of_second_list:
  *                                           The quantity representing
  *                                           the bias-corrected standard
  *                                           deviation of the second
  *                                           list should be this.
  * 
  * standard_error_of_first_list:
  *                                           The quantity representing
  *                                           the standard error of
  *                                           the first list should be
  *                                           this.
  *                                           
  * standard_error_of_second_list:
  *                                           The quantity representing
  *                                           the standard error of
  *                                           the second list should be
  *                                           this.
  * 
  * sum_of_first_list:
  *                                           The quantity representing
  *                                           the sum of all values in
  *                                           the first list should be
  *                                           this.
  * sum_of_second_list:
  *                                           The quantity representing
  *                                           the sum of all values in
  *                                           the second list should be
  *                                           this.
  * sum_of_products:
  *                                           The quantity representing
  *                                           the extended dot product
  *                                           of the two vectors defined
  *                                           as lists above should be
  *                                           this.
  * sum_of_squares_of_first_list:
  *                                           The quantity representing
  *                                           the sum of the square of
  *                                           all elements of the first
  *                                           list should be this.
  * sum_of_squares_of_second_list:
  *                                           The quantity representing
  *                                           the sum of the square of
  *                                           all elements of the second
  *                                           list should be this.
  * 
  * correlation_coefficient_of_both_lists:
  *                                           The quantity representing
  *                                           the Pearson product-moment
  *                                           correlation coefficient
  *                                           between the two lists
  *                                           should be this.
  */

  float     value_of_first_list_at_index_0;
  float     value_of_first_list_at_index_1;
  float     value_of_first_list_at_index_2;
  float     value_of_first_list_at_index_3;
  float     value_of_first_list_at_index_4;

  float     value_of_second_list_at_index_0;
  float     value_of_second_list_at_index_1;
  float     value_of_second_list_at_index_2;
  float     value_of_second_list_at_index_3;
  float     value_of_second_list_at_index_4;

  float     mean_of_first_list;
  float     mean_of_second_list;

  float     variance_of_first_list;
  float     variance_of_second_list;
  
  float     standard_deviation_of_first_list;
  float     standard_deviation_of_second_list;
  
  float     standard_error_of_first_list;
  float     standard_error_of_second_list;

  float     sum_of_first_list;
  float     sum_of_second_list;
  float     sum_of_products;
  float     sum_of_squares_of_first_list;
  float     sum_of_squares_of_second_list;

  float     correlation_coefficient_of_both_lists;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Informs the client of what the purpose of the program
  */
  printf("You will now be asked for two lists of numbers from\n");
  printf("which some meaningful statistical data will be\n");
  printf("generated from. You will then read the data because\n");
  printf("it took me alot of effort generating it.\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Prompts the client of the first list of numbers
  */
  printf("Please enter the first list of numbers with spaces\n");
  printf("between the numbers.\n");

 /*
  * Inputs the first list of numbers
  */
  scanf("%f %f %f %f %f",
    &value_of_first_list_at_index_0,
    &value_of_first_list_at_index_1,
    &value_of_first_list_at_index_2,
    &value_of_first_list_at_index_3,
    &value_of_first_list_at_index_4);

 /*
  * Prompts the client of the second list of numbers
  */
  printf("Please enter the second list of numbers with spaces\n");
  printf("between the numbers.\n");

 /*
  * Inputs the second list of numbers
  */
  scanf("%f %f %f %f %f",
    &value_of_second_list_at_index_0,
    &value_of_second_list_at_index_1,
    &value_of_second_list_at_index_2,
    &value_of_second_list_at_index_3,
    &value_of_second_list_at_index_4);

 /*
  * CALCULATION SUBSECTION
  */

 /*
  * Calculates the mean of the first list using the constants declared
  * in the declaration section of the program as well as the values
  * inputted by the user in the input section of the program
  */
  mean_of_first_list =
   (value_of_first_list_at_index_0 +
    value_of_first_list_at_index_1 +
    value_of_first_list_at_index_2 +
    value_of_first_list_at_index_3 +
    value_of_first_list_at_index_4) /
    length_of_a_single_list;

 /*
  * Calculates the variance of the first list using the constants
  * declared in the declaration section of the program as well as the
  * values inputted by the user in the input section of the program
  */
  variance_of_first_list =
   ((value_of_first_list_at_index_0 - mean_of_first_list) *
    (value_of_first_list_at_index_0 - mean_of_first_list) +
    (value_of_first_list_at_index_1 - mean_of_first_list) *
    (value_of_first_list_at_index_1 - mean_of_first_list) +
    (value_of_first_list_at_index_2 - mean_of_first_list) *
    (value_of_first_list_at_index_2 - mean_of_first_list) +
    (value_of_first_list_at_index_3 - mean_of_first_list) *
    (value_of_first_list_at_index_3 - mean_of_first_list) +
    (value_of_first_list_at_index_4 - mean_of_first_list) *
    (value_of_first_list_at_index_4 - mean_of_first_list)) /
    (length_of_a_single_list - multiplicative_identity);

 /*
  * Calculates the standard deviation of the first list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  standard_deviation_of_first_list =
    sqrt(variance_of_first_list);

 /*
  * Calculates the standard error of the first list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  standard_error_of_first_list =
    standard_deviation_of_first_list /
    sqrt(length_of_a_single_list);

 /*
  * Calculates the mean of the second list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  mean_of_second_list =
   (value_of_second_list_at_index_0 +
    value_of_second_list_at_index_1 +
    value_of_second_list_at_index_2 +
    value_of_second_list_at_index_3 +
    value_of_second_list_at_index_4) /
    length_of_a_single_list;

 /*
  * Calculates the variance of the second list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  variance_of_second_list =
   ((value_of_second_list_at_index_0 - mean_of_second_list) *
    (value_of_second_list_at_index_0 - mean_of_second_list) +
    (value_of_second_list_at_index_1 - mean_of_second_list) *
    (value_of_second_list_at_index_1 - mean_of_second_list) +
    (value_of_second_list_at_index_2 - mean_of_second_list) *
    (value_of_second_list_at_index_2 - mean_of_second_list) +
    (value_of_second_list_at_index_3 - mean_of_second_list) *
    (value_of_second_list_at_index_3 - mean_of_second_list) +
    (value_of_second_list_at_index_4 - mean_of_second_list) *
    (value_of_second_list_at_index_4 - mean_of_second_list)) /
    (length_of_a_single_list - multiplicative_identity);

 /*
  * Calculates the standard deviation of the second list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  standard_deviation_of_second_list =
    sqrt(variance_of_second_list);

 /*
  * Calculates the standard error of the second list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  standard_error_of_second_list =
    standard_deviation_of_second_list /
    sqrt(length_of_a_single_list);

 /*
  * Calculates the sum of the first list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  sum_of_first_list =
    value_of_first_list_at_index_0 +
    value_of_first_list_at_index_1 +
    value_of_first_list_at_index_2 +
    value_of_first_list_at_index_3 +
    value_of_first_list_at_index_4;

 /*
  * Calculates the sum of the second list using the
  * constants declared in the declaration section of the program as
  * well as the values inputted by the user in the input section
  * of the program
  */
  sum_of_second_list =
    value_of_second_list_at_index_0 +
    value_of_second_list_at_index_1 +
    value_of_second_list_at_index_2 +
    value_of_second_list_at_index_3 +
    value_of_second_list_at_index_4;

 /*
  * Calculates the sum of the products of both the first and the second
  * lists using the constants declared in the declaration section of
  * the program as well as the values inputted by the user in the input
  * section of the program
  */
  sum_of_products =
    value_of_first_list_at_index_0 * value_of_second_list_at_index_0 +
    value_of_first_list_at_index_1 * value_of_second_list_at_index_1 +
    value_of_first_list_at_index_2 * value_of_second_list_at_index_2 +
    value_of_first_list_at_index_3 * value_of_second_list_at_index_3 +
    value_of_first_list_at_index_4 * value_of_second_list_at_index_4;

 /*
  * Calculates the sum of the squares of the first list
  * using the constants declared in the declaration section of
  * the program as well as the values inputted by the user in the input
  * section of the program
  */
  sum_of_squares_of_first_list =
    value_of_first_list_at_index_0 * value_of_first_list_at_index_0 +
    value_of_first_list_at_index_1 * value_of_first_list_at_index_1 +
    value_of_first_list_at_index_2 * value_of_first_list_at_index_2 +
    value_of_first_list_at_index_3 * value_of_first_list_at_index_3 +
    value_of_first_list_at_index_4 * value_of_first_list_at_index_4;

 /*
  * Calculates the sum of the squares of the second list
  * using the constants declared in the declaration section of
  * the program as well as the values inputted by the user in the input
  * section of the program
  */
  sum_of_squares_of_second_list =
    value_of_second_list_at_index_0 * value_of_second_list_at_index_0 +
    value_of_second_list_at_index_1 * value_of_second_list_at_index_1 +
    value_of_second_list_at_index_2 * value_of_second_list_at_index_2 +
    value_of_second_list_at_index_3 * value_of_second_list_at_index_3 +
    value_of_second_list_at_index_4 * value_of_second_list_at_index_4;

 /*
  * Calculates the correlation coefficient of both lists
  * using the constants declared in the declaration section of
  * the program as well as the values inputted by the user in the input
  * section of the program
  */
  correlation_coefficient_of_both_lists =
   (length_of_a_single_list *
    sum_of_products -
    sum_of_first_list *
    sum_of_second_list) /
   (sqrt(length_of_a_single_list *
        sum_of_squares_of_first_list -
        sum_of_first_list *
        sum_of_first_list) *
    sqrt(length_of_a_single_list *
        sum_of_squares_of_second_list -
        sum_of_second_list *
        sum_of_second_list));

 /*
  * OUTPUT SUBSECTION
  */

 /*
  * Displays all of the necessary calculations that the holy PDF
  * instructed me to display
  */
  printf("The first list of values:\n");
  printf("%f %f %f %f %f\n",
    value_of_first_list_at_index_0,
    value_of_first_list_at_index_1,
    value_of_first_list_at_index_2,
    value_of_first_list_at_index_3,
    value_of_first_list_at_index_4);
  printf("The second list of values:\n");
  printf("%f %f %f %f %f\n",
    value_of_second_list_at_index_0,
    value_of_second_list_at_index_1,
    value_of_second_list_at_index_2,
    value_of_second_list_at_index_3,
    value_of_second_list_at_index_4);
  printf("The mean of the first list:\n");
  printf("%f\n", mean_of_first_list);
  printf("The mean of the second list:\n");
  printf("%f\n", mean_of_second_list);
  printf("The variance of the first list:\n");
  printf("%f\n", variance_of_first_list);
  printf("The variance of the second list:\n");
  printf("%f\n", variance_of_second_list);
  printf("The standard deviation of the first list:\n");
  printf("%f\n", standard_deviation_of_first_list);
  printf("The standard deviation of the second list:\n");
  printf("%f\n", standard_deviation_of_second_list);
  printf("The standard error of the first list:\n");
  printf("%f\n", standard_error_of_first_list);
  printf("The standard error of the second list:\n");
  printf("%f\n", standard_error_of_second_list);
  printf("The correlation coefficient between both lists:\n");
  printf("%f\n", correlation_coefficient_of_both_lists);

 /*
  * RETURN SUBSECTION
  */

 /*
  * Informs the compiler that the program successfully exited with the
  * specified return code
  */
  return 0;
} /* main */