/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 6: Character Manipulation
Declare a character variable and assign it a letter.
Print the ASCII value of the character.
Convert a lowercase letter to uppercase and vice versa.
*/

#include <iostream>

int main(){

    char letter;

    std::cout << "Input which letter you want to see its ASCII value and converted to either lowercase or uppercase" << std::endl;
    std::cin >> letter;

    std::cout << "ASCII  value of " << letter << " is " << static_cast<int>(letter) << std::endl;

    if (letter >= 'a' && letter <= 'z'){
        letter = letter - 32;

        std::cout << "Converted to uppercase: " << letter << std::endl;
    }

    else if (letter >= 'A' && letter <= 'Z'){
        letter = letter + 32;

        std::cout << "Converted to lowercase: " << letter << std::endl;
    }

    return 0;
}