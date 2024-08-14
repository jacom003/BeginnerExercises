/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 4: Input and Output
Write a program that prompts the user to enter a sentence, reads them using `cin`, and output
the number of letters and spaces
*/

#include <iostream>
#include <string>

//using namespace std;

int main (){

    std::string sentence;
    int letterCount = 0;
    int spaceCount = 0;

    std::cout << "Enter a string of words: " << std::endl;
    std::getline(std::cin, sentence);

    for(char ch : sentence){
        if(isalpha(ch)){
            letterCount++;
        }
        else if(isspace(ch)){
            spaceCount++;
        }
    }

    std::cout << "you entered: \n"<< sentence << std::endl;
    std::cout << "Number of Letters: " << letterCount << std::endl;
    std::cout << "Number of Spaces: " << spaceCount << std::endl;

    return 0;
}