/*=========================================================
 Title:       Lab 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      <Pierre Tawfik>
 Date:        < 08/ 03/ 2022>
 Description: This program is supposed to make it so 2 number are able to be changed through the
 the memory of the program, where x takes the input of 2 numbers and y holds the difference 
 between the 2 numbers.
 ==========================================================*/
using namespace std;
#include <iostream>
#include <cmath>

void Modify(int *x, int *y) {
    int add = *x + *y; //this goes to the memory of x and y and adds them up to make themto the x memory
    int subtract = abs(*x-*y); // using cmath I you can use the absolute value tool and store it in the memory for y
    
    *x=add; //calls the add funtion
    *y=subtract; //calls the substract function to find the absolute value

    
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}

