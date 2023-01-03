// Copyright Zaida Hammel 2022
//
// Created by Zaida Hammel
// Created in Dec 2022
// This program determines the lowest number

#include <time.h>

#include <array>
#include <iostream>
#include <random>
#include <string>

template <size_t N>
int CalculateSmallestNumber(std::array<int, N> listOfNumbers) {
    // This function identifies the largest number
    int min = listOfNumbers[0];

    for (int loopCounter = 0; loopCounter < listOfNumbers.size();
         loopCounter++) {
        if (listOfNumbers[loopCounter] < min) {
            min = listOfNumbers[loopCounter];
        }
    }
    return min;
}

int main() {
    // This function uses an array

    int aRandomNumber;
    std::array<int, 10> randomNumber;
    int smallestNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    for (int counter = 0; counter < 10; counter++) {
        aRandomNumber = idist(rgen);
        randomNumber[counter] = aRandomNumber;
        std::cout << "Random number is " << aRandomNumber;
        std::cout << std::endl;
    }

    // call function
    smallestNumber = CalculateSmallestNumber(randomNumber);
    std::cout << "\nThe lowest number is " << smallestNumber << "."
              << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
