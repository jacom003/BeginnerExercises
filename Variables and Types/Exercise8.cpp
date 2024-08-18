/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 8: Conditional Statements
Use `if` and `else` statements to make decisions based on conditions.
Write a program to find the largest of three numbers.
Write a program to check if a year is a leap year.
*/

#include <iostream>

int main(){

    int num1;
    int num2;
    int num3;
    int largest;

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;

    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;

    if(num1 > num2){
        largest = num1;
    }
    else{
        largest = num2;
    }

    if(largest > num3){
        std::cout << largest << " is the largest number of the three." << std::endl;
    }
    else{
        std::cout << num3 << " is the largest number of the three." << std::endl;
    }

    return 0;
}