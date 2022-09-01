/*==========================================================

 Title:      Lab 3 - Dragon Years
 Course:      CSC 1100
 Author:      <Pierre Tawfik
 Date:        <02 / 01/2022 >
 In this program we need to convert the age of a dragon into wizard age.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {

    string name;
    double age = 0;


    //cout << "What is your dragon name?";
    cin>> name;
    //cout << "How old is your dragon?";
    cin>> age;
    
    if(age <= 2) {
        age = age * 10.5; // this line is for any dragon age 2 or below
    }
    else{ //this else function is used to calculate age for any dragon over th age of 2 wizard years
        age = age -2;
        age = (age*4) + 21;
    }
    cout<<"The dragon named " << name << " is " <<age << " years old in wizard years.";
    
    
    return 0;
}


