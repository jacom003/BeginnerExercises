/*
NOTE: Yes I could be using "using namespace std" but for now I want to 
type out everything before learning the short hand for it.

Exercise 3: Data Type Conversion
Declare an integer variable and assign it a floating-point value. 
Observe the implicit conversion and print the result.
Explicitly convert a floating-point value to an integer using 
the `static_cast` operator and print the result.

******************************************************
NOTE: need to add Implicit and Explicit examples
Implicit = automatic
Explicit = Precede value with new type(int)
*/

#include <iostream>
#include <iomanip>

int main (){

bool b = 35;
int i = b;
i = 3.14;
double pi = i;
unsigned char c = -1;

//When you assign a boolean type with a number greater than 0 then it will be True(Expected outcome 1). 
//Other wise if assign 0 then it is false(Expected outcome 0).
std::cout << b << std::endl;

//When we assign the bool with 35, the results is true thus we get the expected outcome 1.
//So the value of i is 1. comment out i = 3.14 to see results
//But since i = 3.14 then our results will be 3 becuase int does not take a double
std::cout << i << std::endl;

//Must include iomanip to use setprecision, this will allow to convert the int value to
// a double value
std::cout << std::fixed << std::setprecision(1) << pi << std::endl;

/*
ok....theres alot to unpack here.
unsigned values have a range from 0 - 255, this means  assigning a negative number is a no no,
becuase it doesnt fit the range of values.

so on paper, you can convert the -1 to its binary equivalent in 8 bits format 000000001
then convert it to its 1's complement 11111110
then to get the 2's complement we add 1 which come out to 11111111 that holds the value of 255

Now if we try to printout c we will get a blank space.
so then why does -1 become 255 ?

An unsigned char in C++ occupies 8 bits of memory and represents values from 0 to 255.
when you assign -1  to an unsigned char, it undergoes a process called modular arithmetic..

in modular arithmetic, numbers "wrap around" when they exceed the  maximum value or go below the minimum value.

in this case unsigned char, the range  is 0 to 255. so when we assign -1 to it, it wraps around the maximum valaue,
which is 255

to get a value we have to use a Casting int. 
this Casting in will wrap around to the maximum value to get the correct value of our "c".
...........phew.
*/
std::cout << (int)c << std::endl;

    return 0;
}