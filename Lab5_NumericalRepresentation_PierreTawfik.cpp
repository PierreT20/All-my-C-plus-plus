/*==========================================================

 Title:       Lab 5 - Numerical Representation
 Course:      CSC 1100
 Author:      <First & Last Name>
 Date:        <15 /01 /2022 >
 Description: This is a program where it outputs the numbers in lower case, and when you
 exceed 9 and the amount is even it will output even and if its odd it will also output
 odd

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
    int x,y; //makes x and y variables able to become a number
    cin >> x;
    cin>> y;

    for (int i = x; i<= y; i++){ // for loop for the range of numbers given by the user
        if (i == 1){                // makes number 1 in lower case letter
            cout << "one" << endl;
        }
        else if(i == 2){            // makes number 2 in lower case letter
            cout << "two" << endl;
        }
        else if(i == 3){            // makes number 3 in lower case letter
            cout << "three" << endl;
        }
        else if(i == 4){            // makes number 4 in lower case letter
            cout << "four" << endl;
        }
        else if(i == 5){            // makes number 5 in lower case letter
            cout << "five" << endl;
        }
        else if(i == 6){            // makes number 6 in lower case letter
            cout << "six" << endl;
        }
        else if(i == 7){            // makes number 7 in lower case letter
            cout << "seven" << endl;
        }
        else if(i == 8){            // makes number 8 in lower case letter
            cout << "eight" << endl;
        }
        else if(i == 9){            // makes number 9 in lower case letter
            cout << "nine" << endl;
        }
        else if(i > 9){             // this else if statement makes any number bigger then nine to see if its even or odd instead of writing it out in lower case
            if (i % 2 == 0){
                cout<< "even"<< endl;
            }
            else{
                cout << "odd"<< endl;
            }
        }
            
        }
    
        
        
        
    
  
  
  
  return 0;
}

