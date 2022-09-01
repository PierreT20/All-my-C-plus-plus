/*==========================================================

 Title:       Lab 6 - Numerical Reversal
 Course:      CSC 1100
 Author:      <Pierre Tawfik>
 Date:        < 22/ 02/2022 >
 Description: This program is going to accept a number from the user that will dictate the size of the arrray
 the next input from the user will be the amount of number chosed from the first input to be stored in the
 array, and then it will print the array backwards.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    int myNum[size]; //intial array
    int revNum[size]; //takes initial array and reverses it
    
    for(int i = 0; i < size; i++){ //this is to put in all the number into the array
        cin >> myNum[i];
    }
    
   for( int i=0; i < size; i++){    // this is to actually reverse the array thats why its names revNum
       revNum[i] = myNum[size-i-1];
   }
   
   for(int i=0; i< size; i++){  //this is to actually print out the reversed array
      cout << revNum[i] << " ";
  }
    
    
    
    
  return 0;
}


