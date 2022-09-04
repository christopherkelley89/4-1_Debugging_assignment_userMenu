/*
Christopher Kelley
IT 312 SNHU
4-1 Debugging Assignment: Building User Option Menu
07/21/22

*/

/*
Prompt:
This assignment presents you with broken code that you will need to debug. Analyze the existing source code to identify and correct all bugs. Include a
brief written summary of the process you used, the issues you found, and how you corrected them.
The following critical elementsshould be addressed in your project submission:
• Locate and fix the multiple syntax errors.
• Ensure that loops/flow controlstatementsfunction properly.
• Edit the code to account for case-sensitivity of variables .
• Verify that the program output matchesthe problem statement requirements, fixing defects as necessary.
• Include a brief summary of your debugging process and the errors you corrected.

*/
// UserMenu_Solution.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  

//This program builds a menu based on switchcase statements to determine where a user wants to go in the program.
// Program options are then to solve the Tower of Hanoi problem, view the user profile, or exit the program.


//#include "stdafx.h"
#include <cstdlib>
#include <iostream>

//missing standard namespaces statement for cout and cin
using namespace std;

//Tower Function Declaration 
void Tower(int, char, char, char);

//Main Funciton!!!
int main()
{
	//Decleration of choice function
	int choice;
	cout << "1. Solve the Tower of Hanoi" << endl;
	cout << "2. View Your Profile" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice : " << endl;

	//User's input --> Choice
	cin >> choice;
	//case sensitive - this should be "choice" not "Choice". Review Declaration of choice function. 
	switch (choice)
	{
	case 1:
		system("cls");
		//Declaration of numDiscs function
		int numDiscs;

		cout << "**Tower of Hanoi**\n";

		//String was missing "" for numDiscs output to console
		cout << "Enter the number of discs\n";
		cin >> numDiscs;
		cout << "\n\n";
		Tower(numDiscs, 'A', 'B', 'C');
		break;
		//missing identifier "2" for case 2.
	case 2:
		cout << "Username:\t\tPlayer 1" << endl;
		cout << "Gamertag:\t\tImTheBest" << endl;
		cout << "No. Hours Played:\t173" << endl;
		break;
	case 3:
		cout << "Now Exiting." << endl;
		break;
	default:
		cout << "You did not choose anything...so exit this program." << endl;
	}

	return 0;
}


void Tower(int numDiscs, char from, char aux, char to) {
	if (numDiscs == 1) {
		cout << "\tMove disc 1 from " << from << " to " << to << "\n";
		return;
	}
	else {
		//Incorrect case - Case sensitive for "Tower" 
		Tower(numDiscs - 1, from, to, aux);
		cout << "\tMove disc " << numDiscs << " from " << from << " to " << to << "\n";
		Tower(numDiscs - 1, aux, from, to);
	}
}


