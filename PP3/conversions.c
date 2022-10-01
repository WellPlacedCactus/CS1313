
/*
 *  Project #3:   Unit Conversion Crash Preventer
 *  Program:      conversions
 *  Author:       Nathan Vu (nathan.v.vu-1@ou.edu)
 *  Class:        CS1313 010 Programming for Non-Majors in C
 *  Lab:          Sec 010 Fridays 10:30am
 *  Description:  Ensures that there will be no more rocket ship
 *                crashes by asking the client for units in a
 *                non standard unit system and converting it to a
 *                more appropriate unit system.
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
  * feet_per_fathom:
  *                                   The constant expressing the
  *                                   quantity of feet in one fathom
  *                                   should be this.
  * inches_per_foot:
  *                                   The constant expressing the
  *                                   quantity of inches in one foot
  *                                   should be this.
  * watts_per_kilowatt:
  *                                   The constant expressing the
  *                                   quantity of watts in one kilowatt
  *                                   should be this.
  * kilowatts_per_megawatt:
  *                                   The constant expressing the
  *                                   quantity of kilowatts in one
  *                                   megawatt should be this.
  * inches_per_meter:
  *                                   The constant expressing the
  *                                   quantity of inches in one meter
  *                                   should be this.
  * watts_per_mechanical_horsepower:
  *                                   The constant expressing the
  *                                   quantity of watts in one
  *                                   mechanical horsepower should be
  *                                   this.
  * depth_in_fathoms:
  *                                   The client's desired depth
  *                                   measured in fathoms should be
  *                                   this.
  * power_in_mechanical_horsepower:
  *                                   The client's desired power
  *                                   measured in mechanical horsepower
  *                                   should be this.
  * depth_in_meters:
  *                                   The client's desired depth
  *                                   measured in meters should be this.
  * power_in_megawatts:
  *                                   The client's desired power
  *                                   measured in megawatts should be
  *                                   this.
  */

  const int     feet_per_fathom = 6;
  const int     inches_per_foot = 12;
  const int     watts_per_kilowatt = 1000;
  const int     kilowatts_per_megawatt = 1000;
  const float   inches_per_meter = 39.37;
  const float   watts_per_mechanical_horsepower = 745.7;

  float         depth_in_fathoms;
  float         power_in_mechanical_horsepower;
  float         depth_in_meters;
  float         power_in_megawatts;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Informs the client of what the purpose of the program
  */
  printf("Salutations.\n");
  printf("In order to prevent another rocket ship crash, you will be\n");
  printf("asked to provide some measurements. These measurements will\n");
  printf("then be converted into an appropriate unit and given back\n");
  printf("to you. Thank you for your cooperation.\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Prompts the client of their desired depth in fathoms
  */
  printf("Please enter your depth in fathoms...\n");

 /*
  * Inputs the client's desired depth in fathoms
  */
  scanf("%f", &depth_in_fathoms);

 /*
  * Prompts the client of their desired power in mechanical horsepower
  */
  printf("Please enter your power in mechanical horsepower...\n");

 /*
  * Inputs the client's desired power in mechanical horsepower
  */
  scanf("%f", &power_in_mechanical_horsepower);

 /*
  * CALCULATION SUBSECTION
  */

 /*
  * Calculates the depth in meters from the client's desired depth in
  * fathoms using the conversions expressed as constants in the
  * declaration section of this program as well as some mathematical
  * arithmetics.
  */
  depth_in_meters = (
      depth_in_fathoms
    * feet_per_fathom
    * inches_per_foot
    / inches_per_meter
  );

 /*
  * Calculates the power in megawatts from the client's desired power
  * in mechanical horsepower using the conversions expressed as
  * constants in the declaration section of this program as well as
  * some methematical arithmetics.
  */
  power_in_megawatts = (
      power_in_mechanical_horsepower
    * watts_per_mechanical_horsepower
    / watts_per_kilowatt
    / kilowatts_per_megawatt
  );

 /*
  * OUTPUT SUBSECTION
  */

 /*
  * Displays the client's old and new depth calculation
  */
  printf("DEPTH CALCULATION\n");
  printf("FATHOMS: %f fathoms\n", depth_in_fathoms);
  printf("METERS: %f meters\n", depth_in_meters);

 /*
  * Displays the client's old and new power calculation
  */
  printf("POWER CALCULATION\n");
  printf("MECHANICAL HORSEPOWER: %f mechanical horsepower\n",
    power_in_mechanical_horsepower);
  printf("MEGAWATTS: %f megawatts\n", power_in_megawatts);

 /*
  * RETURN SUBSECTION
  */

 /*
  * Informs the compiler that the program successfully exited with the
  * specified return code
  */
  return 0;

} /* main */