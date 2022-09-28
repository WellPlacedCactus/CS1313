
/*
 * Project #3:    Example Program for PP#3
 * Program:       circlecalc
 * Author:        Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:         CS1313 010 Programming for Non-Majors in C
 * Lab:           Sec 010 Fridays 10:30am
 * Description:   Copy of Dr. Neemans example program hand copied line
 *                by line from the CS1313 Lesson named "Artihmetic
 *                Expressions Lesson #1" on slide 8 @ cs1313.ou.edu
 */

#include <stdio.h>

int main ()
{ /* main */

 /*
  * DECLARATION SECTION
  */

 /*
  * VARIABLE SUBSECTION
  * 
  * pi:                     
  *                         The mathematical constant the represents
  *                         the ratio of a circle's circumference to
  *                         its diameter should be this.
  *                         https://en.wikipedia.org/wiki/Pi
  * diameter_factor:
  *                         The factor of a complete circle's angle
  *                         expressed in radians divided by the variable
  *                         above should be this.
  *                         https://en.wikipedia.org/wiki/Exit_status
  * program_success_code:
  *                         The exit status of the child process this
  *                         program creates when executed should be this.
  * radius:
  *                         The client's input for the radius of their
  *                         desired circle should be this.
  * circumference:
  *                         The arc length of the circle as if it were
  *                         opened up and straighted out to a line
  *                         segment should be this.
  *                         https://en.wikipedia.org/wiki/Circumference
  * area:
  *                         The quantity that expresses the extent
  *                         of the cirlce on a regular mathematical
  *                         plane should be this.
  *                         https://en.wikipedia.org/wiki/Area
  */

  const float pi = 3.1415926;
  const float diameter_factor = 2.0;
  const int program_success_code = 0;
  float radius, circumference, area;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Informs the client of what the program does
  */
  printf("I'm going to calculate a circle's\n");
  printf("circumference and area.\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Promps the client of the radius of their desired circle
  */
  printf("What's the radius of the circle?\n");

 /*
  * Inputs the value of the radius mentioned in the comment above
  */
  scanf("%f", &radius);

 /*
  * Calculates the circumference of the client's circle using the
  * constants decalred in the declaration section as well as the
  * radius inputed above
  */
  circumference = pi * radius * diameter_factor;

 /*
  * Calculates the area of the client's circle using a constant
  * declared in the declaration section as well as the radius
  * inputed two statements above this one
  */
  area = pi * radius * radius;

 /*
  * OUTPUT SUBSECTION
  */

 /*
  * Outputs the circumference of the client's circle to the terminal
  * window
  */
  printf("The circumference is %f\n", circumference);

 /*
  * Outputs the area of the client's circle to the terminal window
  */
  printf(" and the area is %f.\n", area);

 /*
  * RETURN SUBSECTION
  */

 /*
  * Informs the compiler that the program successfully exited with
  * the specified return code
  */
  return program_success_code;

} /* main */