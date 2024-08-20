/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

NOTE: this is a modification of the Exercise3.
this modification is to:
create an array list in an empty array
modify the array list
then either continue to modify the array list or exit
*/

#include <iostream>

int main(){

    int marks[5];
    int choice;
    int index;
    int newNumber;

    std::cout << "Enter 5 numbers to add to the array list: \n ";

    for(int i = 0; i < 5; i++){
        std::cin >> marks[i];
    } 

    do{
       std::cout << "\nMenu: Enter an Option \n";
       std::cout << "1. Display array\n";
       std::cout << "2. Replace element\n" ;
       std::cout << "3. Exit\n";
       std::cin >> choice;

       switch (choice){
        case 1:
            std::cout << "Display Array: ";
            for(int i = 0; i < 5; i++){
                std::cout << marks[i] << " "; 
            }

            break;
        case 2:
            std::cout << "Enter the index of the element(0-4) to replace: ";
            std::cin >> index;
            if(index >= 0 && index <= 5){
                std::cout << "Enter the New Number: ";
                std::cin >> newNumber;
                marks[index] = newNumber;
            }
            else{
                std::cout << "Invalid Entry. Please try again." << std::endl;
            }
            break;
        case 3:
            std::cout << "Exiting program.\n" << std::endl;
            break;

        default:
            std::cout << "Invalid choice. Please try again.\n" << std::endl;

       } 
    } while (choice != 3);

    return 0;
}