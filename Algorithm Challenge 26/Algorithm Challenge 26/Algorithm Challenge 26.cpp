// Algorithm Challenge 26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

/*
int years = input("Input the dog's age in years.")
int pp

if (years < 2 or years == 2):
pp = 12 * years

else:
years = years - 2
pp = 24 + (years * 6)

say (pp)
*/
int main()
{
	//Variables
	int years;
	int pp;

	//Inputs
	cout << "Enter dog's age in years only." << endl;
	cin >> years;

	//Statemnets
	if (years < 2 or years == 2)
	{
		pp = years * 12;
	}
	else
	{
		years = years - 2;
		pp = 24 + (years * 6);
	}

	//Output
	cout << "Dog's age = ";
	cout << pp << endl;

	system("pause");
    return 0;
}

