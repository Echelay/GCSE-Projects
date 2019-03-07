// Algorithm Challenge 23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

//Pseudocode:
/*
int money = input("How much money do you want to change into coins.");
string coins = input("Which coins do want to change to: £1, 50p, 20p, 10p, 5p, 2p, p")

if coins == £1:
{
	say "You will get: " + money + " £1 coins"
}
else-if coins == 50p:
{
	say "You will get " + (money * 0.5) + " 50p coins"
}
else-if coins == 20p:
{
	say "You will get " + (money * 0.2) + " 20p coins"
}
else-if coins == 10p:
{
	say "You will get " + (money * 0.1) + " 10p coins"
}
else-if coins == 5p:
{
	say "You will get " + (money * 0.05) + " 5p coins"
}
else-if coins == 2p:
{
	say "You will get " + (money * 0.02) + " 2p coins"
}
else-if coins == p:
{
	say "You will get " + (money * 0.01) + " p coins"
}
else:
{
	say "not valid"
}
*/

int main()
{
	//Variables
	int money;
	string coins;

	//Inputs:
	cout << "How much money would you like to change?" << endl;
	cin >> money;
	cout << "Which coins do want to change to: 1GBP, 50p, 20p, 10p, 5p, 2p, p?" << endl;
	cin >> coins;

	//Maths & Output
	if (coins == "£1")
	{
		cout << "You will get ";
		cout << money + " 1GBP coins" << endl;
	}
	else if (coins == "50p")
	{
		cout << "You will get ";
		cout << (money / 0.5);
		cout << " 50p coins" << endl;
	}
	else if (coins == "20p")
	{
		cout << "You will get ";
		cout << (money / 0.2);
		cout << " 20p coins" << endl;
	}
	else if (coins == "10p")
	{
		cout << "You will get ";
		cout << (money / 0.1);
		cout << " 10p coins" << endl;
	}
	else if (coins == "5p")
	{
		cout << "You will get ";
		cout << (money / 0.05);
		cout << " 5p coins" << endl;
	}
	else if (coins == "2p")
	{
		cout << "You will get ";
		cout << (money / 0.02);
		cout << " 2p coins" << endl;
	}
	else if (coins == "p")
	{
		cout << "You will get ";
		cout << (money / 0.01);
		cout << " p coins" << endl;
	}
	else
		cout << "invalid arguament" << endl;

	//End 


	system("pause");
    return 0;
}

