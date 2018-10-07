// Лабораторная работа 6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int m, n, i, y, z;
	float x;

	cout << "Enter m " << endl;
	cin >> m;

	cout << "Enter n " << endl;
	cin >> n;

	/*n = 0;
	m = 0;
	*/

	z = 0;
	y = 0;

	float **arr = new float * [m];
	for (i = 0; i < m; i++)
		arr[i] = new float[n];

	for (i = 0; i < m; i++)
	{
		for (i = 0; i < n; i++)
		{
			cout << "Enter a number " << endl;
			cin >> x;
			arr[z][y] = x;
			y++;
		}

		y = 0;
		z++;
	}

	system("pause");
    return 0;
}

