// Algorithm Challenge 24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

/*
status1 = random (1-3);
if statsu1 == 1:
{
qwe = "rock"
}
else-if statsu1 == 2:
{
qwe = "paper"
}
else-if statsu1 == 3:
{
qwe = "scissors"
}

string ye3eet = input("Rock, Paper or Scissors")
if (ye3eet == "rock" and qwe == "rock") or (ye3eet == "paper" and qwe == "paper") or (ye3eet == "scissors" and qwe == "scissors")
{
say "Its a draw!!"
}
else-if (ye3eet == "rock" and qwe == "paper") or (ye3eet == "paper" and qwe == "scissors") or (ye3eet == "scissors" and qwe == "rock")
{
say "PC wins"
}
else
{
say "you win"
}
*/

int main()
{
	//Variables
	int status = rand() % 3;
	string qwe;
	string in;
	char all;
	int i = 0;

	//Deciding rp or s
	if (status == 0)
	{
		qwe = "rock";
	}
	else if (status == 1)
	{
		qwe = "paper";
	}
	else if (status == 2)
	{
		qwe = "scissors"; //the deathrun master
	}

	//input
	cout << "Rock, Paper or Scissors" << endl;
	cin >> in;
	while (in[i])
	{
		//all = in[i];
		putchar(tolower(in[i]));
		i++;
	}
	if (in == qwe)
	{
		cout << "A draw!" << endl;
	}
	else if ((in == "rock" and qwe == "paper") or (in == "paper" and qwe == "scissors") or (in == "scissors" and qwe == "rock"))
	{
		cout << "PC wins" << endl;
	}
	else
	{
		cout << "You win!" << endl;
	}
	cout << "PC said: ";
	cout << qwe << endl;

	system("pause");
    return 0;
}

