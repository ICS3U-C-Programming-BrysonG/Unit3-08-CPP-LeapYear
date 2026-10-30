// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 10,26,2026
// This program gets a random year and
// tells the user if it is a leap year or not

#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string yearStr;
    int yearInt;

    // Get the year from the user
    std::cout << "Enter the year: ";
    std::cin >> yearStr;

    // See if it a leap year or not
    try {
        yearInt = std::stoi(yearStr);
        if (yearInt % 4 == 0) {
                if (yearInt
                    % 100 == 0) {
                        if (yearInt
                            % 400 == 0) {
                                std::cout << yearInt << "is a leap year";
                            } else {
                            std::cout << yearInt << "is not a leap year";
                        }
                    } else {
                    std::cout << yearInt << "is not a leap year";
                }
            } else {
                std::cout << yearInt << "is a leap year";
        }
    } catch (std::invalid_argument) {
        // year is not an integer
        std::cout << yearStr << "is not a valid year"
    }
}
