// This Exercise is to practice STRINGS 
#include <iostream>
//When using letters, words, or symbols, the string library must be included
#include <string>

int main(){

    // this is how you initialize a string 
    std::string sometext = "This is a new text";

    std::cout << "Initial value of sometext is: " << sometext << std::endl;

    //with the getline function you can enter the text that will be printed out
    getline(std::cin, sometext);

    std::cout << "you entered: " << sometext << std::endl; 

    return 0;
}