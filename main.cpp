#include <iostream>  // For input/output operations
#include "functions.h"  // Include our custom functions

int main() {
    // Declare variables for menu choice and number inputs
    int choice;
    double num1, num2;  // Variables to store user's number inputs
    
    // main program loop
    do {
        // display menu and get user's choice
        displayMenu();
        choice = getMenuChoice();
        
        // process user's choice using switch statement
        switch(choice) {
            case 1:  // Addition operation
                // Get two numbers from user
                std::cout << "Enter two numbers to add: ";
                std::cin >> num1 >> num2;
                
                // Perform addition and display result
                std::cout << "Result: " << addNumbers(num1, num2) << std::endl;
                break;
                
            case 2:  // Multiplication operation
                // Get two numbers from user
                std::cout << "Enter two numbers to multiply: ";
                std::cin >> num1 >> num2;
                
                // Perform multiplication and display result
                std::cout << "Result: " << multiplyNumbers(num1, num2) << std::endl;
                break;
                
            case 3:  // exit program
                std::cout << "Goodbye!\n";
                break;
                
            default:  // invalid input handling
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);  // Continue loop until user chooses to exit
    
    return 0;  // End program successfully
}