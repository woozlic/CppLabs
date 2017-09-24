// Лабраб1зад3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int c;
	int sm = 0;
	cout << "c=";
	cin >> c;
	cout << endl;
	for (int i = 100; i < 1000; i++)
	{
		sm = i % 10 + (i % 100 / 10) + i / 100;
		//cout << i << " " << sm << endl;
		if (sm == c)
		{
			cout << i << endl;
		} 
		sm = 0;
	}
    return 0;
}

