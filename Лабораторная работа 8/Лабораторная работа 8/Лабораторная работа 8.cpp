// Лабораторная работа 8.cpp: определяет точку входа для консольного приложения.
// Дан символ С и строки S, S0. После каждого вхождения символа С в строку S вставить строку S0. 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	int m;
	char c[2];
	char S[100];
	char S0[10];
	
	cout << "Enter c " << endl;
	gets_s(c);
	cout << "Enter S " << endl;
	gets_s(S);
	cout << "Enter S0 " << endl;
	gets_s(S0);

	for (int i = 0; i < strlen(S); i++)
	{
		if (c[0] == S[i])
		{
			for (int j = 0, t = i; j < strlen(S0), t < strlen(S); j++, t++)
			{
				S[t + strlen(S0) + 1] = S[t + 1];
				S[t + 1] = S0[j];
			}
		}
	}

	cout << c << endl;
	cout << S << endl;
	cout << S0 << endl;

	system("pause");
	return 0;
}