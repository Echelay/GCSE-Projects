// Euler Prpject question 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	/*
	int x;
	x = 1, 1000;

	if (x % 5 == 0 or x % 3 == 0)
	{
		std::cout << x << std::endl;
	} */
	int actual;
	actual = 0;
	int sum = 0;
	int cout = 0;
	int number = 0;

	while (number < 1000)
	{
		if (number % 3 == 0 or number % 5 == 0)
		{
			std::cout << number << std::endl;
			sum = sum + number;
			number = number + 1;
		}
		else
		{
			number = number + 1;
		}
	}
	std::cout << sum << std::endl;
	system("pause");
    return 0;
}

