
/*
 * Project #4:      Italian Resturant Orderer
 * Program:         italian
 * Author:          Nathan Vu (nathan.v.vu-1@ou.edu)
 * Class:           CS1313 010 Programming for Non-Majors in C, Fall 2022
 * Lab:             Sec 010 Fridays 10:30am
 * Description:     A program representing a menu ordering app at an
 *                  Italian resturant with appetizers, entrees, desserts,
 *                  and even drinks.
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
    *   the_quantity_representing_nothing:
    *     The numerical quantity representing nothing should be this.
    *
    *   chicken_parmigiana_price_at_lunch:
    *     The price of chicken parmigiana at lunch should be this.
    *
    *   beef_rigatoni_price_at_lunch:
    *     The price of beef rigatoni at lunch should be this.
    *
    *   vegetarian_lasagna_price_at_lunch:
    *     The price of vegetable lasagna at lunch should be this.
    *
    *   chicken_parmigiana_price_at_dinner:
    *     The price of chicken parmigiana at dinner should be this.
    *
    *   beef_rigatoni_price_at_dinner:
    *     The price of beef rigatoni at dinner should be this.
    *
    *   vegetarian_lasagna_price_at_dinner:
    *     The price of vegatable lasagna at dinner should be this.
    *
    *   linguini_and_clams_price_at_dinner:
    *     The price of linguini and clams at dinner should be this.
    *
    *   antipasto_price:
    *     The price of antipasto should be this.
    *
    *   tomato_bruschetta_price:
    *     The price of tomato bruschetta should be this.
    *
    *   cheese_crostini_price:
    *     The price of cheeze crostini should be this.
    *
    *   cannoli_price:
    *     The price of cannoli should be this.
    *
    *   tiramisu_price:
    *     The price of tiramisu should be this.
    *
    *   gelato_price:
    *     The price of gelato should be this.
    *
    *   coffee_price:
    *     The price of coffee should be this.
    *
    *   soda_price:
    *     The price of soda should be this.
    *
    *   tea_price:
    *     The price of tea should be this.
    *
    *   tax_rate:
    *     The rate of tax should be this.
    *
    *   tip_rate:
    *     The rate of tip should be this.
    *
    *   program_failure_code:
    *     The exit code representing a fail should be this.
    *
    *   program_success_code:
    *     The exit code representing a success should be this.
    *
    *   lunch_code:
    *     The input code representing a lunch meal should be this.
    *
    *   dinner_code:
    *     The input code representing a dinner meal should be this.
    *
    *   no_appetizer_code:
    *     The input code representing no appetizer should be this.
    *
    *   antipasto_code:
    *     The input code representing antipasto should be this.
    *
    *   tomato_bruschetta_code:
    *     The input code representing tomato bruschetta should be this.
    *
    *   cheeze_crostini_code:
    *     The input code representing cheeze crostini should be this.
    *
    *   no_entree_code:
    *     The input code representing no entree should be this.
    *
    *   chicken_parmigiana_code:
    *     The input code representing chicken parmigiana should be this.
    *
    *   beef_rigatoni_code:
    *     The input code representing beef rigatoni should be this.
    *
    *   vegetarian_lesagna_code:
    *     The input code representing vegetarian lasagna should be this.
    *
    *   linguini_and_clams_code:
    *     The input code representing linguini and clams should be this.
    *
    *   no_dessert_code:
    *     The input code representing no dessert should be this.
    *
    *   cannoli_code:
    *     The input code representing cannoli should be this.
    *
    *   tiramisu_code:
    *     The input code representing tiramisu should be this.
    *
    *   gelato_code:
    *     The input code representing gelato should be this.
    *
    *   no_drink_code:
    *     The input code representing no drink should be this.
    *
    *   coffee_code:
    *     The input code representing coffee should be this.
    *
    *   soda_code:
    *     The input code representing soda should be this.
    *
    *   tea_code:
    *     The input code representing tea should be this.
    *
    */

    const float the_quantity_representing_nothing = 0;
    const float chicken_parmigiana_price_at_lunch = 17.75;
    const float beef_rigatoni_price_at_lunch = 19.00;
    const float vegetarian_lasagna_price_at_lunch = 16.25;
    const float chicken_parmigiana_price_at_dinner = 20.00;
    const float beef_rigatoni_price_at_dinner = 22.50;
    const float vegetarian_lasagna_price_at_dinner = 18.00;
    const float linguini_and_clams_price_at_dinner = 24.50;
    const float antipasto_price = 7.75;
    const float tomato_bruschetta_price = 6.00;
    const float cheese_crostini_price = 5.25;
    const float cannoli_price = 8.75;
    const float tiramisu_price = 9.50;
    const float gelato_price = 7.25;
    const float coffee_price = 4.75;
    const float soda_price = 2.50;
    const float tea_price = 3.25;
    const float tax_rate = 0.0875;
    const float tip_rate = 0.18;

    const int program_failure_code = -1;
    const int program_success_code = 0;
    const int lunch_code = 0;
    const int dinner_code = 1;
    const int no_appetizer_code = 0;
    const int antipasto_code = 1;
    const int tomato_bruschetta_code = 2;
    const int cheeze_crostini_code = 3;
    const int no_entree_code = 0;
    const int chicken_parmigiana_code = 1;
    const int beef_rigatoni_code = 2;
    const int vegetarian_lesagna_code = 3;
    const int linguini_and_clams_code = 4;
    const int no_dessert_code = 0;
    const int cannoli_code = 1;
    const int tiramisu_code = 2;
    const int gelato_code = 3;
    const int no_drink_code = 0;
    const int coffee_code = 1;
    const int soda_code = 2;
    const int tea_code = 3;

   /*
    * VARIABLE SUBSECTION
    *
    *   appetizer_price:
    *     The customer's appetizer price should be this.
    *
    *   entree_price:
    *     The customer's entree price should be this.
    *
    *   dessert_price:
    *     The customer's dessert price should be this.
    *
    *   drink_price:
    *     The customer's drink price should be this.
    *
    *   sub_total:
    *     The customer's sub total should be this.
    *
    *   tax_amount:
    *     The customer's tax amount should be this.
    *
    *   tip_amount:
    *     The customer's tip amount should be this.
    *
    *   grand_total:
    *     The customer's grand total should be this.
    *
    *   meal_code:
    *     The customer's meal input code should be this.
    *
    *   appetizer_code:
    *     The customer's appetizer input code should be this.
    *
    *   entree_code:
    *     The customer's entree input code should be this.
    *
    *   dessert_code:
    *     The customer's dessert input code should be this.
    *
    *   drink_code:
    *     The customer's drink input code should be this.
    */

    float appetizer_price;
    float entree_price;
    float dessert_price;
    float drink_price;
    float sub_total;
    float tax_amount;
    float tip_amount;
    float grand_total;

    int meal_code;
    int appetizer_code;
    int entree_code;
    int dessert_code;
    int drink_code;

   /*
    * EXECUTION SECTION
    */

   /*
    * GREETING SUBSECTION
    */

   /*
    * Greets the user...
    */
    printf("Welcome to the restaurant...\n");

   /*
    * INPUT SUBSECTION
    */

   /*
    * Prompts the user for the type of meal
    */
    printf("What meal are you eating?\n");
    printf("Please enter:\n");
    printf("  %d for lunch\n", lunch_code);
    printf("  %d for dinner\n", dinner_code);

   /*
    * Inputs the customers meal code
    */
    scanf("%d", & meal_code);

   /*
    * Idiotproof the meal code
    */
    if ((meal_code != lunch_code) && (meal_code != dinner_code)) {

       /*
        * Print an error message
        */
        printf("That meal code is not recognized.\n");

       /*
        * Exits the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((meal_code != lunch_code)... */

   /*
    * Prompts the user for an appetizer
    */
    printf("What appetizer item would you like?\n");
    printf("Please enter:\n");
    printf("  %d for none\n", no_appetizer_code);
    printf("  %d for antipasto\n", antipasto_code);
    printf("  %d for tomato bruschetta\n", tomato_bruschetta_code);
    printf("  %d for cheeze crostini\n", cheeze_crostini_code);

   /*
    * Inputs the appetizer code
    */
    scanf("%d", & appetizer_code);

   /*
    * Idiotproof the appetizer code
    */
    if ((appetizer_code != no_appetizer_code) &&
        (appetizer_code != antipasto_code) &&
        (appetizer_code != tomato_bruschetta_code) &&
        (appetizer_code != cheeze_crostini_code)) {

       /*
        * Prints out an error message
        */
        printf("That appetizer code is not recognized.\n");

       /*
        * Exits the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((appetizer_code != no_appetizer_code)... */

   /*
    * Prompts the user for their entree
    */
    printf("What entree item would you like?\n");
    printf("Please enter:\n");
    printf("  %d for none\n", no_entree_code);
    printf("  %d for chicken parmigiana\n", chicken_parmigiana_code);
    printf("  %d for beef rigatoni\n", beef_rigatoni_code);
    printf("  %d for vegetarian lasagna\n", vegetarian_lesagna_code);
    printf("  %d for linguini and clams\n", linguini_and_clams_code);

   /*
    * Inputs the users entree code
    */
    scanf("%d", & entree_code);

   /*
    * Idiotproof the entree code
    */
    if ((entree_code != no_entree_code) &&
        (entree_code != chicken_parmigiana_code) &&
        (entree_code != beef_rigatoni_code) &&
        (entree_code != vegetarian_lesagna_code) &&
        (entree_code != linguini_and_clams_code)) {

       /*
        * Prints an error message
        */
        printf("That entree code is not recognized.\n");

       /*
        * Exits the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((entree_code != no_entree_code)... */

   /*
    * Idiotproof the linguini entree
    */
    if ((entree_code == linguini_and_clams_code) &&
        (meal_code == lunch_code)) {

       /*
        * Prints an error message
        */
        printf("That entree is not available during lunch.\n");

       /*
        * Exits the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((entree_code == linguini_and_clams_code)... */

   /*
    * Prompt the user for their dessert
    */
    printf("What dessert item would you like?\n");
    printf("Please enter:\n");
    printf("  %d for none\n", no_dessert_code);
    printf("  %d for cannoli\n", cannoli_code);
    printf("  %d for tiramisu\n", tiramisu_code);
    printf("  %d for gelato\n", gelato_code);

   /*
    * Input the customers dessert code
    */
    scanf("%d", & dessert_code);

   /*
    * Idiotproof the dessert code
    */
    if ((dessert_code != no_dessert_code) &&
        (dessert_code != cannoli_code) &&
        (dessert_code != tiramisu_code) &&
        (dessert_code != gelato_code)) {

       /*
        * Print an error message
        */
        printf("That dessert code is not recognized.\n");

       /*
        * Exit the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((dessert_code != no_dessert_code) */

   /*
    * Prompts the customer for their drink
    */
    printf("What would you like to drink?\n");
    printf("Please enter:\n");
    printf("  %d for nothing\n", no_drink_code);
    printf("  %d for coffee\n", coffee_code);
    printf("  %d for soda\n", soda_code);
    printf("  %d for tea\n", tea_code);

   /*
    * Inputs the customer drink code
    */
    scanf("%d", & drink_code);

   /*
    * Idiotproof the drink code
    */
    if ((drink_code != no_drink_code) &&
        (drink_code != coffee_code) &&
        (drink_code != soda_code) &&
        (drink_code != tea_code)) {

       /*
        * Outputs an error message
        */
        printf("That drink code is not recognized.\n");

       /*
        * Exits the program with a bad code
        */
        exit(program_failure_code);

    } /* if ((drink_code != no_drink_code)... */

   /*
    * The appetizer price depends on the customers appetizer code
    */
    if (appetizer_code == no_appetizer_code) {

       /*
        * Sets the appetizer price
        */
        appetizer_price = the_quantity_representing_nothing;

    } /* if (appetizer_code == no_appetizer_code) */
    else if (appetizer_code == antipasto_code) {

       /*
        * Sets the appetizer price
        */
        appetizer_price = antipasto_price;

    } /* if (appetizer_code == antipasto_code) */
    else if (appetizer_code == tomato_bruschetta_code) {

       /*
        * Sets the appetizer price
        */
        appetizer_price = tomato_bruschetta_price;

    } /* if (appetizer_code == tomato_bruschetta_code) */
    else if (appetizer_code == cheeze_crostini_code) {

       /*
        * Sets the appetizer price
        */
        appetizer_price = cheese_crostini_price;

    } /* if (appetizer_code == cheeze_crostini_code) */

   /*
    * The price of the entrees depends on weather the meal is lunch or
    * dinner.
    */
    if (meal_code == lunch_code) {

       /*
        * The price of the lunch entree depends on the customers entree
        * code
        */
        if (entree_code == no_entree_code) {

           /*
            * Sets the lunch entree price
            */
            entree_price = the_quantity_representing_nothing;

        } /* if (entree_code == no_entree_code) */
        else if (entree_code == chicken_parmigiana_code) {

           /*
            * Sets the lunch entree price
            */
            entree_price = chicken_parmigiana_price_at_lunch;

        } /* if (entree_code == chicken_parmigiana_code) */
        else if (entree_code == beef_rigatoni_code) {

           /*
            * Sets the lunch entree price
            */
            entree_price = beef_rigatoni_price_at_lunch;

        } /* if (entree_code == beef_rigatoni_code) */
        else if (entree_code == vegetarian_lesagna_code) {

           /*
            * Sets the lunch entree price
            */
            entree_price = vegetarian_lasagna_price_at_lunch;

        } /* if (entree_code == vegetarian_lesagna_code) */

    } /* if (meal_code == lunch_code) */
    else if (meal_code == dinner_code) {

       /*
        * The price of the dinner entree depends on the customers entree
        * code
        */
        if (entree_code == no_entree_code) {

           /*
            * Sets the dinner entree price
            */
            entree_price = the_quantity_representing_nothing;

        } /* if (entree_code == no_entree_code) */
        else if (entree_code == chicken_parmigiana_code) {

           /*
            * Sets the dinner entree price
            */
            entree_price = chicken_parmigiana_price_at_dinner;

        } /* if (entree_code == chicken_parmigiana_code) */
        else if (entree_code == beef_rigatoni_code) {

           /*
            * Sets the dinner entree price
            */
            entree_price = beef_rigatoni_price_at_dinner;

        } /* if (entree_code == beef_rigatoni_code) */
        else if (entree_code == vegetarian_lesagna_code) {

           /*
            * Sets the dinner entree price
            */
            entree_price = vegetarian_lasagna_price_at_dinner;

        } /* if (entree_code == vegetarian_lesagna_code) */
        else if (entree_code == linguini_and_clams_code) {

           /*
            * Sets the dinner entree price
            */
            entree_price = linguini_and_clams_price_at_dinner;

        } /* if (entree_code == linguini_and_clams_code) */

    } /* if (meal_code == dinner_code) */

   /*
    * The dessert price is based on the customers dessert code
    */
    if (dessert_code == no_dessert_code) {

       /*
        * Sets the dessert price
        */
        dessert_price = the_quantity_representing_nothing;

    } /* if (dessert_code == no_dessert_code) */
    else if (dessert_code == cannoli_code) {

       /*
        * Sets the dessert price
        */
        dessert_price = cannoli_price;

    } /* if (dessert_code == cannoli_code) */
    else if (dessert_code == tiramisu_code) {

       /*
        * Sets the dessert price
        */
        dessert_price = tiramisu_price;

    } /* if (dessert_code == tiramisu_code) */
    else if (dessert_code == gelato_code) {

       /*
        * Sets the dessert price
        */
        dessert_price = gelato_price;

    } /* if (dessert_code == gelato_code) */

   /*
    * The drink price is based on the customer's drink code
    */
    if (drink_code == no_drink_code) {

       /*
        * Sets the drink price
        */
        drink_price = the_quantity_representing_nothing;

    } /* if (drink_code == no_drink_code) */
    else if (drink_code == coffee_code) {

       /*
        * Sets the drink price
        */
        drink_price = coffee_price;

    } /* if (drink_code == coffee_code) */
    else if (drink_code == soda_code) {

       /*
        * Sets the drink price
        */
        drink_price = soda_price;

    } /* if (drink_code == soda_code) */
    else if (drink_code == tea_code) {

       /*
        * Sets the drink price
        */
        drink_price = tea_price;

    } /* if (drink_code == tea_code) */

   /*
    * Wether of not a receipt is printed depends on if the customer
    * ordered anything.
    */
    if ((appetizer_code == no_appetizer_code) &&
        (entree_code == no_entree_code) &&
        (dessert_code == no_dessert_code) &&
        (drink_code == no_drink_code)) {

       /*
        * Tells the customer to get out because they did not order anything
        */
        printf("If your not going to order anything get out of here.");

       /*
        * Exits the program
        */
        exit(program_success_code);

    } /* if ((appetizer_code == no_appetizer_code)... */

   /*
    * CALCULATION SUBSECTION
    */

   /*
    * Calculates the price of the foods and drink ordered
    */
    sub_total = (appetizer_price +
                 entree_price +
                 dessert_price +
                 drink_price);

   /*
    * Calculates the tax amount
    */
    tax_amount = sub_total * tax_rate;

   /*
    * Calculates the tip amount
    */
    tip_amount = sub_total * tip_rate;

   /*
    * Calculates the grand total
    */
    grand_total = sub_total + tax_amount + tip_amount;

   /*
    * OUTPUT SUBSECTION
    */

   /*
    * Neatly prints the top of the receipt
    */
    printf("-----------------------------------------\n");
    printf("Please give me your money!\n");
    printf("\n");

   /*
    * Prepares the user to face their gluttony
    */
    printf("Your order was:\n");

   /*
    * The appetizer section of the receipt depends on wether or not the
    * customer ordered an appetizer
    */
    if (appetizer_code != no_appetizer_code) {

       /*
        * Prints out two spaces for formatting
        */
        printf("  ");

       /*
        * The name of the appetizer depends on the appetizer code
        */
        if (appetizer_code == antipasto_code) {

           /*
            * Prints out the name of the appetizer
            */
            printf("Antipasto:          ");

        } /* if (appetizer_code == antipasto_code) */
        else if (appetizer_code == tomato_bruschetta_code) {

           /*
            * Prints out the name of the appetizer
            */
            printf("Tomato Bruschetta:  ");

        } /* if (appetizer_code == tomato_bruschetta_code) */
        else if (appetizer_code == cheeze_crostini_code) {

           /*
            * Prints out the name of the appetizer
            */
            printf("Cheeze Crostini:    ");

        } /* if (appetizer_code == cheeze_crostini_code) */

       /*
        * Prints out the appetizer price
        */
        printf("       ");
        printf("$%5.2f\n", appetizer_price);

    } /* if (appetizer_code != no_appetizer_code) */

   /*
    * The entree section of the receipt depends on wether or not the
    * customer ordered an entree.
    */
    if (entree_code != no_entree_code) {

       /*
        * Prints out two spaces for formatting
        */
        printf("  ");

       /*
        * The word after the entree name depends on the meal code that the
        * user inputted
        */
        if (meal_code == lunch_code) {

           /*
            * The name of the entree depends on the entree code that the user
            * inputted
            */
            if (entree_code == chicken_parmigiana_code) {

               /*
                * Prints out the name of the lunch entree
                */
                printf("Chicken Parmigiana Lunch:  ");

            } /* if (entree_code == chicken_parmigiana_code) */
            else if (entree_code == beef_rigatoni_code) {

               /*
                * Prints out the name of the lunch entree
                */
                printf("Beef Rigatoni Lunch:       ");

            } /* if (entree_code == beef_rigatoni_code) */
            else if (entree_code == vegetarian_lesagna_code) {

               /*
                * Prints out the name of the lunch entree
                */
                printf("Vegetarian Lasagna Lunch:  ");

            } /* if (entree_code == vegetarian_lesagna_code) */

           /*
            * Prints out the price of the lunch entree
            */
            printf("$%5.2f\n", entree_price);

        } /* if (meal_code == lunch_code) */
        else if (meal_code == dinner_code) {

           /*
            * The name of the entree depends on the entree code that the user
            * inputted
            */
            if (entree_code == chicken_parmigiana_code) {

               /*
                * Prints out the name of the dinner entree
                */
                printf("Chicken Parmigiana Dinner: ");

            } /* if (entree_code == chicken_parmigiana_code) */
            else if (entree_code == beef_rigatoni_code) {

               /*
                * Prints out the name of the dinner entree
                */
                printf("Beef Rigatoni Dinner:      ");

            } /* if (entree_code == beef_rigatoni_code) */
            else if (entree_code == vegetarian_lesagna_code) {

               /*
                * Prints out the name of the dinner entree
                */
                printf("Vegetarian Lasagna Dinner: ");

            } /* if (entree_code == vegetarian_lesagna_code) */
            else if (entree_code == linguini_and_clams_code) {

               /*
                * Prints out the name of the dinner entree
                */
                printf("Linuini and Clams Dinner:  ");

            } /* if (entree_code == linguini_and_clams_code) */

           /*
            * Prints out the price of the dinner entree
            */
            printf("$%5.2f\n", entree_price);

        } /* if (meal_code == dinner_code) */

    } /* if (entree_code != no_entree_code) */

   /*
    * The dessert section of the receipt depends on wether or not the
    * customer ordered a dessert.
    */
    if (dessert_code != no_dessert_code) {

       /*
        * Prints out two spaces for formatting
        */
        printf("  ");

       /*
        * The name of the dessert depends on the dessert code that the user
        * inputted
        */
        if (dessert_code == cannoli_code) {

           /*
            * Prints out the name of the dessert
            */
            printf("Cannoli:     ");

        } /* if (dessert_code == cannoli_code) */
        else if (dessert_code == tiramisu_code) {

           /*
            * Prints out the name of the dessert
            */
            printf("Tiramisu:    ");

        } /* if (dessert_code == tiramisu_code) */
        else if (dessert_code == gelato_code) {

           /*
            * Prints out the name of the dessert
            */
            printf("Gelato:      ");

        } /* if (dessert_code == gelato_code) */

       /*
        * Prints out the dessert price
        */
        printf("              ");
        printf("$%5.2f\n", dessert_price);

    } /* if (dessert_code != no_dessert_code) */

   /*
    * The drink section of the receipt depends on wether or not the
    * customer ordered a drink.
    */
    if (drink_code != no_drink_code) {

       /*
        * Prints out two spaces for formatting
        */
        printf("  ");

       /*
        * The name of the drink depends on the drink code that the user
        * inputted
        */
        if (drink_code == coffee_code) {

           /*
            * Prints out the name of the drink
            */
            printf("Coffee:     ");

        } /* if (drink_code == coffee_code) */
        else if (drink_code == soda_code) {

           /*
            * Prints out the name of the drink
            */
            printf("Soda:       ");

        } /* if (drink_code == soda_code) */
        else if (drink_code == tea_code) {

           /*
            * Prints out the name of the drink
            */
            printf("Tea:        ");

        } /* if (drink_code == tea_code) */

       /*
        * Prints out the drink price
        */
        printf("               ");
        printf("$%5.2f\n", drink_price);

    } /* if (drink_code != no_drink_code) */

   /*
    * Neatly prints the body of the receipt
    */
    printf("  ---------------------------------\n");
    printf("  Food Total:                $%5.2f\n", sub_total);
    printf("  Tax:                       $%5.2f\n", tax_amount);
    printf("  Tip:                       $%5.2f\n", tip_amount);
    printf("  ---------------------------------\n");
    printf("  Grand Total:               $%5.2f\n", grand_total);

   /*
    * Neatly prints the bottom of the receipt
    */
    printf("\n");
    printf("Thank you for giving me your money!\n");
    printf("-----------------------------------------\n");

   /*
    * Returns the main function with a healthy success code
    */
    return program_success_code;

} /* main */