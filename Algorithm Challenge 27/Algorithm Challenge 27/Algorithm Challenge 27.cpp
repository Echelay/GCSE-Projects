// Algorithm Challenge 27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	//Variables
	int pass;
	int dist;
	int fin;

	//Input
	cout << "Enter number of passangers then distance. " << endl;
	cin >> pass;
	cin >> dist;

	//Maths
	dist = dist - 1;
	fin = 3 + (dist * 2);

	//Statements
	if (pass > 5 or pass == 5)
		fin = fin * 1.5;
	else
		dist = dist;

	//Outputs
	cout << "Total cost = ";
	cout << fin << endl;

	system("pause");
    return 0;
}

/*
int passangers = input("Enter numbers of passagers")
int distance = input("Enter how many km to travel")
int final

distace = distance - 1
final = 3 + (distance * 2)
if (passangers > 5 or passangers == 5):
distance = distance * 1.5
say (distance)
else:
say (distance)
*/