// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program tells you if you are eligible to vote.


#include <iostream>


int main() {
    std::cout << "This program tells you if you are eligible to vote" <<
    std::endl;

    std::string age_as_string;
    int age_as_int;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age_as_string;

    try {
        age_as_int = std::stoi(age_as_string);
        if (age_as_int < 18) {
        std::cout << "You are not eligible to vote." << std::endl;
        } else if (age_as_int >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    }} catch (std::invalid_argument) {
        std::cout << "Please input a whole number.";
    }
}
