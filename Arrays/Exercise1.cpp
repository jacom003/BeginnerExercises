/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

**Array Initialization:** 
Declare an integer array of size 5 and initialize it with some values. Print the elements of the array.
*/

#include <iostream>

int main(){

    int Numbers[5] = {1,2,3,4,5};

    for(int i = 0; i < 5 ; i++){
        std::cout << Numbers[i] << std::endl;
    }

    return 0;
}