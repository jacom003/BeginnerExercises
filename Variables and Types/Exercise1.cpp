/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 1: Basic Declarations
Declare variables of different data types (int, float, double, char, bool) 
and initialize them with appropriate values. 
Print the values of these variables to the console.
*/
#include <iostream>

int main(){

int number = 3;
float fnum = 3.234;
double dnum = 3.4;
char letter = 'a';
bool isHot = true;
bool isCold = false;

std::cout << "This is an integer: " << number << std::endl;
std::cout << "This is a float: " << fnum << std::endl;
std::cout << "This is a double: " << dnum << std::endl;
std::cout << "This is a character: " << letter << std::endl;
std::cout << "When boolean is true the result is: " << isHot << std::endl;
std::cout << "When boolean is false the result is: " << isCold << std::endl;
    return 0;
}