/////////////////////////////////////////////////////
// Source.cpp
// �������� ���� ������� - main

#include <iostream>
#include "Fraction.h"
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Fraction v;
	v.Read();
	v.Display();
	cout << "г�����:" << v.getSub() << endl;
	v.Comparison();

	return 0;
}