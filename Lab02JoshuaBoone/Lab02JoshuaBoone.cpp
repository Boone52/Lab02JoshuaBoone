// Lab02JoshuaBoone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;
	float C;
	cout << "Hi my name is Josh and I'm going to solve the equation:" << endl;
		
	cout << "Ax + B = 0:" << endl;
	cout << "For x" << endl;
	cout << "" << endl;
	

	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "" << endl;

	cout << "Solving " << A << "x+" << B << "=0" << " for x..." << endl;
	cout << "" << endl;
	cout << "The answer is:" << endl;
	
	C = (-B / A);
		cout << "x=" << C;


}






