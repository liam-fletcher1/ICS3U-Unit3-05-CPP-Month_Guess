// Copyright (c) 2021 Liam Fletcher All rights reserved.
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to input a number for the month
// and the program will tell them which month it is

#include <iostream>
#include <string>

int main() {
    // this function prints out the number for the month
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter the number for a month(Ex:3 for March): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());

    // process
    switch (monthAsInt) {
        case 1 :
            std::cout << "This is the month of January!" << std::endl;
            break;
        case 2 :
            std::cout << "This is the month of February!" << std::endl;
            break;
        case 3 :
            std::cout << "This is the month of March!" << std::endl;
            break;
        case 4 :
            std::cout << "This is the month of April!" << std::endl;
            break;
        case 5 :
            std::cout << "This is the month of May!" << std::endl;
            break;
        case 6 :
            std::cout << "This is the month of June!" << std::endl;
            break;
        case 7 :
            std::cout << "This is the month of July!" << std::endl;
            break;
        case 8 :
            std::cout << "This is the month of August!" << std::endl;
            break;
        case 9 :
            std::cout << "This is the month of September!" << std::endl;
            break;
        case 10 :
            std::cout << "This is the month of October!" << std::endl;
            break;
        case 11 :
            std::cout << "This is the month of November!" << std::endl;
            break;
        case 12 :
            std::cout << "This is the month of December!" << std::endl;
            break;
        default :
            std::cout << "Invalid month" << std::endl;
    }
    std::cout << std::endl;
            std::cout << "\nDone.";
}
