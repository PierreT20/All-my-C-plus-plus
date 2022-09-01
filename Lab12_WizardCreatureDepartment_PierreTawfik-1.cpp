/*==========================================================

 Title:     Lab 12 - C++ Wizard Creature Department

 Course:  	CSC 1100
 Author:  	<Pierre Tawfik>
 Date:    	< 12/ 04/2022 >
 Description: This program Mkes three classes one for creature , Phoenix and Basilisk, and takes the name 
 as well as the quantity.

 ==========================================================
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Make Creature, Phoenix, Basilisk class here
class Creature{
    private:
        string Name;
        int quantity;
        //string creature;
    public:
        string creature;
   // set and get for Name
        void setName(string x){
            Name = x;
    }
        string getName(){
         return Name;
    }
    // set and get for quantity
        void setQuantity(int Q){
            if (quantity < 0){
                quantity = Q;
            }
        
            else {
                quantity = Q;
        }
        }
        int getQuantity(){
            return quantity;
        }
    
        void printStatement(){
            cout << "There's " << getQuantity() << " of creature's named " << getName() << endl;
    }
      
    // Paramater contructure
        Creature(string x, int Q) {
            setName(x);
            setQuantity(Q);
    }
    // Empty contructure
        Creature(){
            setName("unknown");
            setQuantity(0);
    }
    
};

// Phoenix class
class Phoenix: public Creature {
    public:
        string colour;
        string Creature = "phoenix";
        void  setColour(string C){
            colour = C;
        }
        
        string getColour(){
            return colour;
        }
   
   void printStatement(){
        cout << "There's " << getQuantity() <<" " << getColour() << " phoenixes named " << getName() << endl;
   }
   
};

//Basilisk class
class Basilisk: public Creature {
    public:
        string type = "basilisk";
        void printStatement(){
            cout << "There's 1 basilisk named "<< getName() <<endl;
        }

};   

int main()
{
    string x;
    string name3 = "Clover";
    // CREATE empty array of size 3 for storing names
    string nameArr[3];
    // CREATE a loop to record user input as names
    for (int i = 0; i<2; i++) {
        cin >> x;
        nameArr[i] = x;
    }
    nameArr[2] = name3;
    // sets third name to “Clover”
    
    Creature c(nameArr[0], 2);
    //print statement from class
    c.printStatement();

    Phoenix p;
    //sets name, quantity and color
    p.setName(nameArr[1]);
    p.setQuantity(3);
    p.setColour("golden");
    //print statement from class
    p.printStatement();

    Basilisk b;
    //sets name
    b.setName(nameArr[2]);
    //prints statement from class
    b.printStatement();
    
    // extra credit here - 3 points
}





