// Jones_Haley_Chapter2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ocean Levels Rising

#include <iostream>
using namespace std;

int main()
{
	double millimeters = 1.5;
	double year1 = 5, year2 = 7, year3 = 10;
	double oceanlevel1, oceanlevel2, oceanlevel3;

	oceanlevel1 = millimeters * year1;
	oceanlevel2 = millimeters * year2;
	oceanlevel3 = millimeters * year3;

	cout << "In " << year1 << "the ocean level will be " << oceanlevel1 << "millimeters" << endl;
	cout << "In " << year2 << "the ocean level will be " << oceanlevel2 << "millimeters" << endl;
	cout << "In " << year3 << "the ocean level will be " << oceanlevel3 << "millimeters" << endl;

	return 0;
}
