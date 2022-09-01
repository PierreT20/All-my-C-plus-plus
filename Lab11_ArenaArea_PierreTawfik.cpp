/*==========================================================

 Title:       Lab 11 -  Arena Area Inheritance
 Course:      CSC 1100
 Author:      <Pierre Tawfik>
 Date:        < 04/ 05/2022 >
 Description: This program takes a class to take the user input of the radius then prints
 the radius squared, after we have another class that overrides the previous radius to 
 deriving it and doing the area of the circle.

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create classes Arena and ArenaArea here
class Arena { // this class takes in the radius and squares it
    public:
        int radius;
         void display() {
            cin >> radius;
            cout << radius * radius;
    }
};
class ArenaArea: public Arena{ // this class takes the previous radius and overrides the display funtion to calculate the area of the circle
    public:
        int scan_input(){ // returns radius from the previous class
            return radius;
        }
        void display(){
            cout << double(radius*radius)*3.14 << endl; // displays and overrides the previous display function
    }
};
int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}

