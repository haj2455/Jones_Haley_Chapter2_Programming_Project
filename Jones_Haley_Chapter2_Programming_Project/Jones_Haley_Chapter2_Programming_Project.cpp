// Jones_Haley_Chapter2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Engery Drinks

#include <iostream>
using namespace std;

int main() {
	
	const int total_customers = 16500;
	const double percent_purchase = 0.15;
	const double percent_citrus = 0.58;

	int customersPurchase = total_customers * percent_purchase;
	int customersPreferCitrus = customersPurchase * percent_citrus;

	cout << "The approximate number of customers that purchase one or more engery drinks per week is " << customersPurchase << "." << endl;
	cout << "The approximate number of customers that prefered citrus flavored energy drinks is " << customersPreferCitrus << "." << endl;

	return 0;
}