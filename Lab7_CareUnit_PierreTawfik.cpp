/*==========================================================

 Title:   Lab 7 - C++ Care Unit
 Course:  	CSC 1100
 Author:  	<Pierre Tawfik>
 Date:    	< 01/03 /2022 >
 Description: You need to make a programe that converts the heights in meters, then you
 need to make a pass by reference so you can swap the waights of the 2 twins in order to
 calculate their BMI before and after they swap.

 ==========================================================
*/

#include <iostream>
using namespace std;

double BMIcalculator(double weight){ //this calculates the BMI
    double BMI;
    BMI = weight/(1.8*1.8);
    return BMI;
}

double BMIcalculator(double weight, double height){ //this calculates the bmi of the second twin
    double BMI;
    BMI = weight/(height*height);
    return BMI;
}


double conversionMeters(double height){ // this converts the heights into meters
    double heightM;
    heightM = height/3.281;
    return heightM;
}

void swap(double &w1,double &w2){ //this is a pass by reference so when the twins swap weight we still get teh right awnswer
    double temp = w1;
    w1 = w2;
    w2 = temp;
}

// You can't edit the main file - we froze it anyway :) 
// So all you need to do is define the four functions listed
int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}

