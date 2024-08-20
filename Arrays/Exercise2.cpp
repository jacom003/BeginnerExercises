/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

**Accessing Elements:** 
Create an array of characters and access individual characters using their indices.
*/

#include <iostream>

int main(){

    char letters[5] = {'a','b','d','e','f'};

    std::cout << "First letter is: " << letters[0] << std::endl;
    std::cout << "First letter is: " << letters[1] << std::endl;
    std::cout << "First letter is: " << letters[2] << std::endl;
    std::cout << "First letter is: " << letters[3] << std::endl;
    std::cout << "First letter is: " << letters[4] << std::endl;

    int index;
    do{
    std::cout << "Enter the index number (0-4) to display its corresponding letter: " << std::endl;
    std::cin >> index;
    
    if(index >= 0 && index <= 4){
        std::cout << "The letter at index " << index << " is: " << letters[index] << std::endl;
    }
    else{
        std::cout << "Invalid index number. Please try again." << std::endl;
    }
    }
    while(index < 0 || index > 4);
        
    
    return 0;
}