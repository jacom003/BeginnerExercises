/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 5: Constants
Declare constants using the `const` keyword to represent fixed values like pi or the speed of light.
*/

#include <iostream>

int main(){

    const double pi = 3.14159;
    double radius;
    const int lightspeed = 100;

    std::cout << "the number of pi is: " << pi << std::endl;
    
    // Ill figure something out to use lightspeed for later
    std::cout << "the speed of light is: " << lightspeed << std::endl;

    std::cout << "Enter the radius of your circle: " << std::endl;
    std::cin >> radius;

    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;

    std::cout << "Circumference is: " << circumference << std::endl;
    std::cout << "Area is: " << area << std::endl;

    return 0;
}