#ifndef FUNCTIONS_H  // Header guard to prevent multiple inclusions
#define FUNCTIONS_H

// Function declarations (prototypes)

/**
 * Displays the main menu
 * Outputs numbered options for different operations
 */
void displayMenu();

/**
 * Gets and validates the user's menu choice
 * @return int - The user's selected menu option (1-3)
 */
int getMenuChoice();

/**
 * Adds two double precision numbers
 * @param a - First number to add
 * @param b - Second number to add
 * @return double - Sum of the two numbers
 */
double addNumbers(double a, double b);

/**
 * Multiplies two double precision numbers
 * @param a - First number to multiply
 * @param b - Second number to multiply
 * @return double - Product of the two numbers
 */
double multiplyNumbers(double a, double b);

#endif // End of header guard