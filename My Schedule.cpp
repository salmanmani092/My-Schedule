//+++++++++++++++++++++++++
//My Schedule For Fall 2020
//
//+++++++++++++++++++++++++
//+++++++++++++++++++++++++
// Muhammad Salman
// C++ with David Busch
// Lab Name: Lab 2 Exploring output
// Lab Description: To get familiar with command prompt using C++.
//


#include <iostream>       // for cout, endl
#include <string>

using namespace std;

//creating reference for the days of the week
const string M1  =   "Monday     8:00    Calculus 1";
const string M2 =    "Monday     12:00   Gen Chemistry 1";
const string M3 =    "Monday     1:30    C++";
const string T1 =    "Tuesday    1:00    C++ Lab";
const string T2 =    "Tuesday    5:30    Gen Chemistry 1 Lab";
const string W =     "Wednesday  8:00    Calculus 1";
const string F =     "Friday     8:00    Calculus 1";


// Creating reference for Checkboard patterns of stars
const string CB1 = "*  *  *  *  *";  
const string CB2 = "*  *  *  *  *";
const string CB3 = "*  *  *  *  *";



int main()
{   // creating output of schedule
	cout << M1 << endl;
	cout << M2 << endl;
	cout << M3 <<  endl;
	cout << T1 <<  endl;
	cout << T2 <<  endl;
	cout << W <<   endl;
	cout << F <<   endl;


	// Now outputting Checkboard star pattern

	cout << CB1 << endl;
	cout << CB2 << endl;
	cout << CB3 << endl;
	cout << CB1 << endl;
	cout << CB2 << endl;
	cout << CB3 << endl;

	return 0;
}