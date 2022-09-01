/*==========================================================

 Title:       Lab4 - Giftbox to Tricity
 Course:      CSC 1100
 Author:      <Pierre Tawfik>
 Date:        < 08/ 02/2022 >
 For this program we are going to need to take 2 inputs from the user being the length
 of the 2 wooden planks then calculate the hypotenuse of the triangle. After that 
 we need to then compare the 2 planks and make it output a true or false depending on the
 circumstance of what we are comparing

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  double side_1;
  double side_2;
  
  cin >> side_1; //takes input from user
  cin >> side_2; // takes input from user
  
 bool equals = (side_1 == side_2); // bool statement to see if they are equal or not
 cout << equals << endl;
 
 
 bool smaller = (side_1 < side_2); // bool statement to see if side_1 is smaller then side_2
 cout << smaller << endl;
 
 
 bool greater = (side_1 > side_2); // bool statement to see if side_1 is greater then side_2
 cout << greater << endl;

 
 int h = round(sqrt(pow(side_1,2) + pow(side_2,2))); // hypotenuse theorem but it rounds the answer
 
 cout << "The hypotenuse of triangle equals to " << h <<endl; // prints the solution of the line above
  
  return 0;
}

