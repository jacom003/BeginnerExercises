// this Exercise is for IF-ELSE statements
#include <iostream>

int main(){
    // this is the set up for an array of age's
    int age[] = {10, 16, 48, 72, 66, 23};

    //we are using this for loop to loop through the array
    for(int i = 0; i < 6; i++){

        // this first if statement checks the ages of 20 or less
        if(age[i] < 20){
            std::cout << "this is a child " << age[i] << std::endl;
        }
        // the following condition checks if the age is between 20 and 60
        else if(age[i] >= 20 && age[i] < 60){
            std::cout << "this is a old person " << age[i] << std::endl;
        }
        // finally the final condition is used of all other conditions fail
        else{
            std::cout << "this person is retired " << age[i] << std::endl; 
        }
    }

    return 0;
}