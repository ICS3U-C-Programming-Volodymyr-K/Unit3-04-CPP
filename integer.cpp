// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-25-2025
// This program defines the integer of a number

#include<iostream>

int main() {
    // defines the first variable
    int userNumber;
    //Gets the value of variable
    std::cout << "Insert random number";
    std::cin >> userNumber;
    //declares constant variable which will unchange
    const int zeroNumber = 0;
// If the number just equal to 0, then it will just state so.  
    if (userNumber == zeroNumber) {
        std::cout << "Your number is 0. \n";
    }
    else if (userNumber >= zeroNumber) {
        std::cout << "Your number " << userNumber << " is positive. \n";
    }
    // If the variable negative which means it is less than a 0, it will display the message describing it.
    else if (userNumber <= zeroNumber) {
        std::cout << "Your number " << userNumber << " is negative. \n";
    }
//Compares two variables and based on the result states the phrase, in this case positive.
    else if (userNumber >= zeroNumber) {
        std::cout << "Your number is." << userNumber << "is positive. \n";
    }
}