// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: PAtrick Gemmell
// Created on: October 2019
// This program tells the month

#include <iostream>

int main() {
    // this function tell the month
    int month;

    // input
    std::cout << "Enter a number of a month (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        default :
            if (month == 10) {
                    std::cout << "October";
                } else if (month == 11) {
                    std::cout << "November";
                } else if (month == 12) {
                    std::cout << "December";
                } else {
                    std::cout << "Invalid number";
        }
    }
}
