// Algorithm Challenge 21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	int age;
	float discount;

	cout << "Enter age" << endl;
	cin >> age;
	if (age == 13 or 13 < age < 15 or age == 15)
	{
		cout << "You get 30% off" << endl;
		discount = 0.7;
	}
	else if (age == 16 or age == 17)
	{
		cout << "You get 20% off" << endl;
		discount = 0.8;
	}
	else if (age > 50 or age == 50)
	{
		cout << "You get 40% off" << endl;
		discount = 0.6;
	}
	else
	{
		cout << "You get no discount" << endl;
		discount = NULL;
	}

	system("pause");
    return 0;
}

