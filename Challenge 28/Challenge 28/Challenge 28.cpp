// Challenge 28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	//Variables
	int dim;
	int dim2;
	int cir;
	float pi = 3.14159;
	int rad;
	int diim;
	int fin;

	//Inpiut
	cout << "Enter lawn dimentions" << endl;
	cin >> dim;
	cin >> dim2;
	//mission from god
	cout << "Enter circle radius" << endl;
	cin >> cir;

	//Maths
	rad = pi * (cir *  cir);
	diim = dim * dim2;
	fin = diim - rad;

	//Out
	cout << "Grass area = ";
	cout << fin << endl; //they cant catch us jake were on a mission from god
		//UwU OwO 

	system("pause");
    return 0;
}

/*
int dim = input("dementions of lawn")
int dim2 = input("Other dimention of lawn")
int cir = input ("input radius of the circle")
float pi = 3.14159
int rad
int diiiim
int fin

rad = pi * (cir * cir)
diiiim = dim * dim2
fin = diiim - rad
say (fin)
*/

