//this Example is using arrays

#include <iostream>

int main(){

//int marks[5];

//initizaling an Array
//***************************************************************************************
//option 1
/*marks[0] = 96;
marks[1] = 92;
marks[2] = 78;
marks[3] = 54;
marks[4] = 89;
*/
//***************************************************************************************
//option 2
//int marks[] = {96, 92, 78, 54, 86};
//***************************************************************************************
//option 3
int marks[5] = {96, 92, 78, 54, 86};
//***************************************************************************************
// this for loop will print out all the numbers that is inside the array
for(int i = 0; i < 5; i++){
    std::cout << marks[i] << std::endl;
}

return 0;
}