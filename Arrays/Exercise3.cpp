/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

**Modifying Elements:** 
Create an array of numbers and modify specific elements by assigning new values.

Modification of Exercise:
*create an empty array
*have the user input the elements of the array
*then have the user select which index of the array to change the number

*/

#include <iostream>

int main(){

int marks[5];
int choice;


std::cout << "Enter the numbers for an array of 5." << std::endl;
for(int i = 0; i < 5; i++){
std::cin >> marks[i];
}

std::cout << "Original array: " << std::endl;
for(int i = 0; i < 5; i++){
std::cout << marks[i] << " ";
}
std::cout<< std::endl;

int index;
int newNumber;

std::cout << "Select the index of the array(0-4): " << std::endl;
std::cin >> index;

if(index >= 0 && index <= 5){
    std::cout << "Enter the new number: " << std::endl;
    std::cin >> newNumber;
    marks[index] = newNumber;
}
else{
    std::cout << "Invalid Entry, Please try again." << std::endl;
    return 1;
}

std::cout << "Modified array: ";
for(int i = 0; i < 5; i++){
    std::cout << marks[i] << " ";

}
std::cout << std::endl;
    return 0;
}