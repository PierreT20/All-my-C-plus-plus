/*==========================================================

 Title:               Lab 9 - C++ Basketball Season
 Course:  	CSC 1100
 Author:  	<Pierre Tawfik>
 Date:    	< 22/ 03/2022 >
 Description: This program we need to write a function that lets the user edit the score
 of a specific game as well as calculate the total score of each game combined, as well
 as keep track of the score of each game throughout the season.

 ==========================================================
*/

#include <iostream>
using namespace std;
#include<vector>
void alterGameScore(int a[], int n) {
    int x;
    cin >> x;
    a[n] = a[n] + x;
	//cout << "\nenter how many points to add to game " << n + 1 << ": ";

}

int totalScore(int a[], int length) {
    int totalScore = 0;
    for(int i=0 ; i<length; i++){
        totalScore = totalScore + a[i];
    }
     return totalScore;

}
void printScores(int a[], int length) {
    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << " ";
    cout << a[4] << " ";
}
int main() {

	const int SIZE = 5;
	int* pArr;
	pArr = new int[SIZE];

	for (int i = 0; i < SIZE; i++) 
    		*(pArr + i) = ((i + 2) * 10) + (i + 1); 
	int numberOfGame;
	//cout << "Enter game to check: ";
	cin >> numberOfGame;
	alterGameScore(pArr, numberOfGame - 1);
	//cout << "new value: ";
	cout << *(pArr + numberOfGame - 1) << endl;
	printScores(pArr, SIZE);
	//cout << "\ntotal Score: ";
	cout << endl << totalScore(pArr, SIZE);

}

