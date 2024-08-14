/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 2: Arithmetic Operations
Declare two integer variables and perform arithmetic operations 
(addition, subtraction, multiplication, division, modulus) on them. 
Print the results.
*/

#include <iostream>

int main(){

int A;
int B;

int AddResults;
int SubResults;
int DivResults;
int MultResults;
int ModResults;

std::cout << "Enter the first Integer: " << std::endl;
std::cin >> A;

std::cout << "Enter the second Integer: " << std::endl;
std::cin >> B;

AddResults = A + B;
std::cout << "Addition results: " << AddResults << std::endl;

SubResults = A - B;
std::cout << "Subtraction results: " << SubResults << std::endl;

DivResults = A / B;
std::cout << "Division results: " << DivResults << std::endl;

MultResults = A * B;
std::cout << "Multiplication results: " << MultResults << std::endl;

ModResults = A % B;
std::cout << "Modulus results: " << ModResults << std::endl;

    return 0;
}