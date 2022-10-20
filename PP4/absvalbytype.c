
/*
 * Project #4:  Example Program for Fourth Programming Project
 * Program:     absvalbytype
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: An exact handwritten copy of Dr. Neeman's program from
 *              slides 37 to 40 in the slideshow linked below:
 *              http://cs1313.ou.edu/if_lesson1.pdf
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
  * int_code:
  *                         The user input code for the choice of
  *                         "integer" should be this.
  * float_code:
  *                         The user input code for the choice of
  *                         "float" should be this.
  * program_failure_code:
  *                         The program return code in a case of a
  *                         failure should be this.
  * program_success_code:
  *                         The program return code in a case of a
  *                         success should be this.
  */

  const int int_code = 1, float_code = 2;
  const int program_failure_code = -1;
  const int program_success_code = 1;

 /*
  * VARIABLE SUBSECTION
  * 
  * float_input_value:
  *                       The client's float input value should be
  *                       this.
  * float_output_value:
  *                       The client's float output value should be
  *                       this.
  * int_input_value:
  *                       The client's int input value should be this.
  * int_output_value:
  *                       The client's int output value should be this.
  * data_type_code:
  *                       The client's choice for datatype represented
  *                       as an integer should be this.
  */

  float float_input_value, float_output_value;
  int   int_input_value, int_output_value;
  int   data_type_code;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Informs the user of the purpose of the program
  */
  printf("I'm going to calculate the absolute value\n");
  printf("of a number that you input.\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Prompts the user to input a code for the number type
  */
  printf("Would you like to input an int or a float?\n");
  printf("(Enter %d for an int or %d for a float.)\n",
    int_code,
    float_code);

 /*
  * Inputs the users prefered number type code
  */
  scanf("%d", &data_type_code);

 /*
  * Idiot proof the data type code
  */
  if ((data_type_code != int_code) && (data_type_code != float_code)) {
    
   /*
    * Print out the idiotproof error message
    */
    printf("ERROR: I don't  recognize data type code %d\n",
      data_type_code);

   /*
    * Exit the program with the fail code because the data type code
    * invalid
    */
    exit(program_failure_code);

  } /* if ((data_type_code != int_code) && (data_type_code != float_code)) */

 /*
  * The data type of the variables used depends on the users data type
  * code
  */
  if (data_type_code == int_code) {

   /*
    * Prompts the client of the int value they want
    */
    printf("What is the int value?\n");

   /*
    * Inputs the int value mentioned above
    */
    scanf("%d", &int_input_value);

  } /* if (data_type_code == int_code) */
  else if (data_type_code == float_code) {

   /*
    * Prompts the user of the float value they want
    */
    printf("What is the float value?\n");

   /*
    * Inputs the float value mentioned above
    */
    scanf("%f", &float_input_value);

  } /* if (data_type_code == float_code) */

 /*
  * The variables used depends on the data type code that the user
  * entered
  */
  if (data_type_code == int_code) {

   /*
    * The operation performed on the int output value depends on the
    * sign of the int input value
    */
    if (int_input_value < 0) {

     /*
      * Performs the negation operation on the int input value
      */
      int_output_value = -int_input_value;

    } /* if (int_input_value < 0) */
    else {

     /*
      * Performs the identity operation on the int input value
      */
      int_output_value = +int_input_value;
    } /* if (int_input_value < 0)...else */

  } /* if (data_type_code == int_code) */
  else if (data_type_code == float_code) {

   /*
    * The operation performed on the float output value depends on the
    * sign of the float input value
    */
    if (float_input_value < 0) {

     /*
      * Performs the negation operation on the float input value
      */
      float_output_value = -float_input_value;

    } /* if (float_input_value < 0) */
    else {

     /*
      * Performs the identity operation on the float input value
      */
      float_output_value = +float_input_value;

    } /* if (float_input_value < 0)...else */

  } /* if (data_type_code == float_code) */

 /*
  * The value that is printed out to the terminal depends on the data
  * type code
  */
  if (data_type_code == int_code) {

   /*
    * Prints out the integer value and its absolute value
    */
    printf("The absolute value of %d is %d\n",
      int_input_value,
      int_output_value);

  } /* if (data_type_code == int_code) */
  else if (data_type_code == float_code) {

   /*
    * Prints out the float value and its absolute value
    */
    printf("The absolute value of %f is %f\n",
      float_input_value,
      float_output_value);

  } /* if (data_type_code == float_code) */

 /*
  * RETURN SUBSECTION
  */

 /*
  * Exits the program with the success return code
  */
  return program_success_code;

} /* main */