
/**
 * Project #2:		Example Program for PP#2
 * Program:				read_list
 * Author:				Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:					CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:						Sec 010 Fridays 10:30am
 * Description:		Copy of Dr. Neemans example program hand copied line
 * 								by line from "Standard I/O Lesson" on slide 20
 * 								@ cs1313.ou.edu
*/

#include <stdio.h>

int main()
{ /* main */

 /*
  * DECLARATION SECTION
  */

 /*
  * VARIABLE SUBSECTION
  * 
  * CS1313_average_height_in_m:     
  *                               The average height of all
  *                               students in CS1313 measured
  *                               in units of meters should
  *                               be this.
  * number_of_silly_people:
  *                               The number of all silly
  *                               people measured in humans
  *                               should be this.
  * number_of_nonsilly_people:
  *                               The number of all nonsilly
  *                               people measured in humans
  *                               should be this.
  * Henrys_middle_initial:
  *                               Dr. Neeman's middle initial
  *                               should be this.
  */

	float	CS1313_average_height_in_m;
	int		number_of_silly_people;
	int		number_of_nonsilly_people;
	char	Henrys_middle_initial;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Inform the user that they will be asked some questions
  */
	printf("I'm going to guess the answers to questions\n");
	printf("I've already asked!\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Prompt the user of how many silly and nonsilly people there are
  */
	printf("In CS1313, how many silly people are there,\n");
	printf(",and how many non-silly people are there?\n");

 /*
  * Input how many silly and nonsilly people there are
  */
	scanf("%d %d",
		&number_of_silly_people,
		&number_of_nonsilly_people);

 /*
  * Promps the user of the average height of students in
  * CS1313 as well as Henry's middle initial
  */
	printf("What is the average height in m in CS1313\n");
	printf(",and what is Henry's middle initial?\n");

 /*
  * Inputs the average height and middle initial
  */
	scanf("%f %c",
		&CS1313_average_height_in_m,
		&Henrys_middle_initial);

 /*
  * OUTPUT SUBSECTION
  */

 /*
  * Outputs all of the information gathered in the previous moments
  */
	printf("In CS1313, there are %d silly people\n",
		number_of_silly_people);
	printf("and %d non-silly people.\n",
		number_of_nonsilly_people);
	printf("In CS1313, the average height is %f m.\n",
		CS1313_average_height_in_m);
	printf("Henry's middle initial is %c.\n",
		Henrys_middle_initial);
} /* main */
