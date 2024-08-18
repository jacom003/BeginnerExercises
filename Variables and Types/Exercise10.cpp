/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 10: Operator Precedence
Demonstrate the order of operations by evaluating expressions with different operators.
Use parentheses to control the order of evaluation.
*/

#include <iostream>

int main(){

    // we need about 4 to 5 numbers to use for operator precedence
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;

    double result1; // can you use one results for all of the different order operator precedence ?
    double result2;
    double result3;

    // here we need to collect what was inputted from the user then calculated to the operator precedence
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;
    std::cout << "Enter the fourth number: " << std::endl;
    std::cin >> num4;
    std::cout << "Enter the fifth number: " << std::endl;
    std::cin >> num5;
        
    // we need to find different ways to do operator precedence, myabe like 3 to 4 different ways.
    result1 = (num1 + num2) - num3 * (num4 / num5);
    // this will prdouble out the order that was used as well as the results
    std::cout << "The results of (num1 + num2) - num3 * (num4 / num5) is: " << result1 << std::endl;

    result2 = num1 * (num2 + num3) - num4 / num5;
    std::cout << "The results of num1 * (num2 + (num3 - num4) / num5) is: " << result2 << std::endl;

    result3 = (num1 + num2) / (num3 - (num4 * num5));
    std::cout << "The results of (num1 + num2) / (num3 - (num4 * num5)) is: " << result3 << std::endl;

    return 0;
}