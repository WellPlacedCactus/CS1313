
/*
 **********************************************************************
 *** Project #1:  Thinking of a Number                              ***
 *** Program:     my_number                                         ***
 *** Author:      Nathan Vu (nathan.v.vu-1@ou.edu)                  ***
 *** Class:       CS 1313 010 Computer Programming, Fall 2022       ***
 *** Lab:         Sec 010 Fridays 10:30am                           ***
 *** Description: Asks the user to pick a number within a range,    ***
 ***   then tells whether the user's number matches the program's.  ***
 **********************************************************************
 */

#include <stdio.h>

int main ()
{ /* main */
   /*
    ***************************
    *** Declaration Section ***
    ***************************
    *
    *****************************
    * Named Constant Subsection *
    *****************************
    *
    * minimum_number:       The user's number should be at least this.
    * maximum_number:       The user's number should be at most this.
    * close_distance:       How close the user has to be to be told
    *                       that they're close.
    * computers_number:     The number the computer is "thinking" of.
    * program_success_code: By convention, returning 0 from a program
    *                       to the operating system (in this case,
    *                       Linux) means that the program has finished
    *                       successfully.
    */
    const int minimum_number       =  0;
    const int maximum_number       = 100;
    const int close_distance       =  10;
    const int computers_number     =  50;
    const int program_success_code =  0;
   /*
    ***********************
    * Variable Subsection *
    ***********************
    *
    * users_number: The user's chosen number.
    */
    int users_number;

   /*
    *************************
    *** Execution Section ***
    *************************
    *
    ***********************
    * Greeting Subsection *
    ***********************
    *
    * Describe what the program does.
    */
    printf("Let's see whether you can guess ");
    printf("the number that I'm thinking of.\n");

   /*
    * Tell the user the range to choose from.
    */
    printf("It's between %d and %d.\n",
        minimum_number, maximum_number);

   /*
    ********************
    * Input Subsection *
    ********************
    *
    * Prompt the user to guess.
    */
    printf("What number am I thinking of?\n");

   /*
    * Input the user's number.
    */
    scanf("%d", &users_number);

   /*
    *********************
    * Output Subsection *
    *********************
    *
    * Judge the user's number.
    */
    if ((users_number < minimum_number) ||
        (users_number > maximum_number)) {
       /*
        * Idiotproof: they're outside the range, so complain.
        */
        printf("hay");
        printf(" That's not between %d and %d!\n",
            minimum_number, maximum_number);
    } /* if ((users_number < minimum_number) || ...) */
    else if (users_number == computers_number) {
       /*
        * They're correct, so be amazed.
        */
        printf("That cool...\n");
    } /* if (users_number == computers_number) */
    else if (abs(users_number - computers_number) <= close_distance) {
       /*
        * They're within close_distance, so say that they're close.
        */
        printf("Close but not close enough dawg...\n");
    } /* if (abs(users_number - computers_number) <= ...) */
    else {
       /*
        * They're not even close, so be cruel.
        */
        printf("Naw that aint even close.\n");
    } /* if (abs(users_number - computers_number) <= ...)...else */
   /*
    * Tell the operating system (in this case, Linux) that
    * the program finished successfully.
    */
    return program_success_code;
} /* main */

