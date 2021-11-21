/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

void calculateQuadraticEquation(double a, double b, double c)
{ 
	if(a == 0) throw "First input must be greater than zero.";
	double value = b * b - (4 * a * c);

    if(value < 0) throw "'b ^ 2 - 4ac' should be greater than 0. Try providing larger value for second input 'b'.";
    double firstRoot = ((-1 * b) + sqrt(value)) / 2 * a;
	double secondRoot = ((-1 * b) - sqrt(value)) /2 * a;
	cout << "Roots are " << firstRoot << " and " << secondRoot << "." << endl;

	// wait for user to read the console output 
	system("pause");
}

int main() 
{
	double a, b, c;
	try 
	{
		cout << "Enter three numbers with spaces (a b c): ";
		cin >> a >> b >> c;
		calculateQuadraticEquation(a, b, c);
	} 
	catch(const char * msg) 
	{
		cout << msg << endl;
	}

	return 0;
}