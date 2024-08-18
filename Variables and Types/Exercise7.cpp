/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 7: Boolean Expressions
Use logical operators (&&, ||, !) to create boolean expressions and evaluate their results.
Write a program to check if a number is even or odd using a boolean expression.

*/

#include <iostream>

int main (){

int number;

std::cout << "Enter a number" << std::endl;
std::cin >> number;

bool isEven = (number % 2 == 0);

if(isEven){
std::cout << number << " is even." << std::endl;
}
else{
    std::cout << number << " is odd." << std::endl;
}

bool x,y;
x = true;
y = false;

// when using an AND operator, if true && false = false
std::cout << "Logical AND Operator: " << (x&&y) << std::endl;

// when using an AND operator, if true && true = true
std::cout << "Logical AND Operator: " << (x&&x) << std::endl;

// when using an AND operator, if false && false = false
std::cout << "Logical AND Operator: " << (y&&y) << std::endl;

// when using an OR Operator, if true OR false = true
std::cout << "Logical OR Operator: " << (x||y) << std::endl;

// when using an OR Operator, if true OR true = true
std::cout << "Logical OR Operator: " << (x||x) << std::endl;

// when using an OR Operator, if false OR false = false
std::cout << "Logical OR Operator: " << (y||y) << std::endl;

// when using an NOT Operator, if NOT true = false
std::cout << "Logical NOT Operator: " << (!x) << std::endl;

// when using an NOT Operator, if NOT false = true
std::cout << "Logical NOT Operator: " << (!y) << std::endl;
 
    return 0;
}