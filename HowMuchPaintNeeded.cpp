// Chapter 2 Exercise 20 - How Much Paint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// write a program to find how many gallons of paint needed
#include <iostream>
#include <cmath> //to use round up function
using namespace std;

int main()
{
	// name variables
	double paintSQFTPerGallon, fenceSQFT, paintNeeded;

	// define variables
	paintSQFTPerGallon = 340;

	// make sure two coats, double SQFT
	fenceSQFT = 2 * (6 * 100);

	// calculate exact number of gallons needed
	paintNeeded = fenceSQFT / paintSQFTPerGallon;

	// round up to nearest whole number using ceil()
	int paintNeededRoundedUp = static_cast<int>(ceil(paintNeeded));

	// display needed paint
	cout << "You need " << paintNeededRoundedUp << " gallons of paint for two coats on a 6x100ft fence." << endl;
	cout << "\nHello";
	return 0;
}

