/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 9: Simple Input Validation
Write a program that prompts the user to enter a positive number and keeps asking until a valid input is provided.
*/

#include <iostream>

int main(){

    int num;
    
    do{
    std::cout << "Enter an Even number......or else" << std::endl;
    std::cin >> num;

    if(num % 2 == 1)
    std::cout << "The number " << num << " IS NOT an Even number, Try again." << std::endl;
    }
    while(num % 2);
        std::cout << "The number " << num << " is a Even number." << std::endl;

    return 0;
}