
/*
 * Project #2:  Forced US Census Bureau Survey
 * Program:     census
 * Author:      Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:       CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:         Sec 010 Fridays 10:30am
 * Description: Forces the user to take a US Census Bureau Survey
 *              for data collection purposes. Asks the user to
 *              input information reguarding their social media
 *              usage and phone number credentials.
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
  * average_text_messages_received_per_day:     
  *                                         The subjects's average
  *                                         number of text messages
  *                                         received per day should
  *                                         be this.
  * average_web_videos_watched_per_week:
  *                                         The subjects's average
  *                                         number of web videos
  *                                         watched per week should
  *                                         be this.
  * first_three_digits_of_phone_number:
  *                                         The subject's first
  *                                         three phone number digits
  *                                         should be this. This is
  *                                         also commonly referred to
  *                                         as the area code.
  * second_three_digits_of_phone_number:
  *                                         The subject's second three
  *                                         phone number digits should
  *                                         be this.
  * last_four_digits_of_phone_number:
  *                                         The subject's final four
  *                                         phone number digits should
  *                                         be this.
  */

  float average_text_messages_received_per_day;
  float average_web_videos_watched_per_week;
  int   first_three_digits_of_phone_number;
  int   second_three_digits_of_phone_number;
  int   last_four_digits_of_phone_number;

 /*
  * EXECUTION SECTION
  */

 /*
  * GREETING SUBSECTION
  */

 /*
  * Inform user of survey they must take
  */
  printf("You are now being forced to participate\n");
  printf("in a survey conducted by the US Census\n");
  printf("Bureau. You will now be asked a series\n");
  printf("of questions against your will and you\n");
  printf("WILL answer honestly.\n");

 /*
  * INPUT SUBSECTION
  */

 /*
  * Prompt user of how many text messages they
  * receive in one day
  */
  printf("On average, how many text messages do\n");
  printf("you receive in one day?\n");

 /*
  * Input how many text messages user receives in one day
  */
  scanf("%f", &average_text_messages_received_per_day);

 /*
  * Prompt user of how many web videos they watch in one week
  */
  printf("On average, how many web videos do you\n");
  printf("watch in one week?\n");

 /*
  * Input how many web videos user watches in one week
  */
  scanf("%f", &average_web_videos_watched_per_week);

 /*
  * Prompt user of their phone number
  */
  printf("What is your phone number?\n");

 /*
  * User inputs their phone number separated by spaces
  */
  scanf("%d %d %d",
    &first_three_digits_of_phone_number,
    &second_three_digits_of_phone_number,
    &last_four_digits_of_phone_number);

 /*
  * OUTPUT SUBSECTION
  */

 /*
  * Display all of the information just collected
  */
  printf("On average,\n");
  printf("you receive %f text messages in one\n",
    average_text_messages_received_per_day);
  printf("day and you watch %f web videos in\n",
    average_web_videos_watched_per_week);
  printf("one week.\n");
  printf("Your phone number is %d-%d-%d\n",
    first_three_digits_of_phone_number,
    second_three_digits_of_phone_number,
    last_four_digits_of_phone_number);

} /* main */