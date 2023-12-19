// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Dec. 18th, 2023
// This program generates 10 random numbers
// then finds and displays the minimum of those numbers
#include <time.h>
#include <array>
#include <iostream>

int findMin(std::array<int, 10> randomNumbers) {
    const int ARRAY_SIZE = 10;
    int minimum = 100;
    for (int aNum : randomNumbers) {
        if (aNum < minimum) {
            minimum = aNum;
        }
    }
    return minimum;
}

int main() {
    // Declare constants
    const int ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Initialize empty list
    std::array<int, 10> listOfInt;

    // seed value
    srand(time(NULL));

    // Use a for loop to generate random numbers and populate the array
    for (int counter = 0; counter < ARRAY_SIZE; counter++) {
        listOfInt[counter] = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        std::cout << listOfInt[counter] << " added to the list at position ";
        std::cout << counter << "." << std::endl;
    }

    // Function call
    int minimum = findMin(listOfInt);

    // Display average
    std::cout << " " << std::endl;
    std::cout << "The min number is " << minimum << "." << std::endl;
}
