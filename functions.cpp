#include <iostream>  // For input/output operations
#include "functions.h"

void displayMenu() {
    // Clear visual separation before displaying menu
    std::cout << "\nCalculator Menu\n";
    
    // Display all available options
    std::cout << "1. Add two numbers\n";
    std::cout << "2. Multiply two numbers\n";
    std::cout << "3. Exit\n";
    
    // Prompt for user input
    std::cout << "Enter your choice (1-3): ";
}

int getMenuChoice() {
    int choice;
    
    // Get user input and store it in choice variable
    std::cin >> choice;
    
    // Return user's selection
    return choice;
}

double addNumbers(double a, double b) {
    // Perform addition and return result
    return a + b;
}

double multiplyNumbers(double a, double b) {
    // Perform multiplication and return result
    return a * b;
}