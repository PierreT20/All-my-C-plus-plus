/*==========================================================

 Title:       Lab 11 - Wizard Identification using Classes
 Course:      CSC 1100
 Author:      <Pierre Tawfik>
 Date:        < 03/ 29/ 2022 >
 Description: This programe creats a class named Wizard, which represents the wizards
 age, namen and school ID. Then create a function that gets all the information for the
 wizards.
 ==========================================================
*/

#include <iostream>

using namespace std;

//Create your class Wizard here.
class Wizard {
    public:
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    void set_wizardAge(int a) { // set function to make the usertaken input to WizardAge and put  put it in the get gunction
        wizardAge = a;
    }
    string set_wizardFirstName(string b){// set function used to store a string and pass it to the get function
        wizardFirstName = b;
        return b;
    }
    string set_wizardLastName(string c){// set function to store a string for the last name and pass it to the get function
        wizardLastName = c;
        return c;
    }
    void set_wizard_ID(int d){ //set function to make the student id equal to an integer and pass it to the get function
        wizard_ID = d;
    }
    int get_wizardAge(){ // preints age
        return wizardAge;
    }
    string get_wizardFirstName(){// prints name
        return wizardFirstName;
    }
    string get_wizardLastName(){ // prints last name
        return wizardLastName;
    }
    int get_wizard_ID(){ //preints ID
        return wizard_ID;
    }
    
};




int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}

