// functions.cpp
#include <iostream>
#include "functions.h"

void displayMenu() {
    std::cout << "\nCalculator Menu\n";
    std::cout << "1. Add two numbers\n";
    std::cout << "2. Multiply two numbers\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice (1-3): ";
}

int getMenuChoice() {
    int choice;
    std::cin >> choice;
    return choice;
}

double addNumbers(double a, double b) {
    return a + b;
}

double multiplyNumbers(double a, double b) {
    return a * b;
}