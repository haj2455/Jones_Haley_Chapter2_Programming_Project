// Jones_Haley_Chapter2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Traveling on a tank of gas

#include <iostream>
using namespace std;

int main() {

	const double tank_capacity = 20.0;
	const double mpg_town = 23.5;
	const double mpg_highway = 28.9;

	double distancetown = tank_capacity * mpg_town;
	double distancehighway = tank_capacity * mpg_highway;

	cout << "The amount of distance the car can travel in town on one tank of gas is " << distancetown << " miles." << endl;
	cout << "The amount of distnce the car can travel on the highway on one tank of gas is " << distancehighway << " miles." << endl;

	return 0;

}