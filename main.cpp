// main.cpp
#include <iostream>
#include "functions.h"

int main() {
    int choice;
    double num1, num2;
    
    do {
        displayMenu();
        choice = getMenuChoice();
        
        switch(choice) {
            case 1:
                std::cout << "Enter two numbers to add: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << addNumbers(num1, num2) << std::endl;
                break;
                
            case 2:
                std::cout << "Enter two numbers to multiply: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << multiplyNumbers(num1, num2) << std::endl;
                break;
                
            case 3:
                std::cout << "Goodbye!\n";
                break;
                
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
    
    return 0;
}