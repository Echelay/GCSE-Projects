// Euler Project  question 50.cpp : Defines the entry point for the console application.
//Oliver Reid // 15-11-18

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

/*
The prime 41, can be written as the sum of six consecutive primes:
41 = 2 + 3 + 5 + 7 + 11 + 13
This is the longest sum of consecutive primes that adds to a prime below one-hundred.
The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.
Which prime, below one-million, can be written as the sum of the most consecutive primes?          
*/

int main()
{
	int number = 0;
	long long sum = 0;
	int i;
	long compue = 2000000;
	int compue1 = 90;
	int compue2 = 80;
	int compue3 = 70;
	int compue4 = 60;
	int compue5 = 50;
	int compue6 = 40;
	wwwhhhiiillle:
	while (number < compue)
	{
		//for (i = 2; i <= number / 2; ++i)
	//	{
			if (number % 2 == 0 or number % 3 == 0 or number % 4 == 0 or number % 5 == 0 or number % 6 == 0 or number % 7 == 0 or number % 8 == 0 or number % 9 == 0)
			{
				number = number + 1;
				//break;
			}
			else
			{
				std::cout << number << std::endl;
				sum = sum + number;
				number = number + 1;
				//break;
			}
	//	}
	}
	std::cout << sum << std::endl;
	/*if (sum % 2 == 0 or sum % 3 == 0 or sum % 4 == 0 or sum % 5 == 0 or sum % 6 == 0 or sum % 7 == 0 or sum % 8 == 0 or sum % 9 == 0)
	{
		std::cout << ": incorrect" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ":" << std::endl;
		std::cout << ": Retry" << std::endl;

		compue = compue - 10;
		sum = 0;
		number = 0;

		goto wwwhhhiiillle;

	}
	else
	{
		std::cout << ": Cprrect" << std::endl;
	} */
	system("pause");
    return 0;
}

