//The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143?

#include <iostream>
#include <math.h>
#include "prime.hpp"

#define LOG(x) std::cout << x << std::endl

int main()
{
    printf("Enter a positive integer: ");
    int userInput;
    std::cin >> userInput;

    LOG(userInput);
}