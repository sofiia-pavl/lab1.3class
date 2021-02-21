#include "Fraction.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <sstream> 

using namespace std;

void Fraction::Display()
{
	cout << endl;
	cout << one << ". " << two << endl;
	cout << endl;
	cout << three << ". " << four << endl;
}

void Fraction::Init(int x, int y,int z,int w)
{
	one = x;
	two = y;
	three = z;
	four = w;
}

void Fraction::Read()
{
	int x, y,z,w;

	cout << "1ціла = "; cin >> x;
	cout << "1дробова = "; cin >> y;
	cout << "2ціла = "; cin >> z;
	cout << "2дробова = "; cin >> w;

	Init(x, y, z, w);
}

const char* Fraction::toString()
{
	stringstream sout; 
	
	sout << one << " + i * " << two << endl;
	sout << three << " + i * " << four << endl;
	
	return sout.str().c_str(); 
}

void Fraction::Comparison()
{
	if (one == three && two == four) cout << one << "."<<two<< " = " << three<<"."<<four;
	else if (one < three)   cout << one << "." << two << " < " << three << "." << four;
	else if (one > three)   cout << one << "." << two << " > " << three << "." << four;
}