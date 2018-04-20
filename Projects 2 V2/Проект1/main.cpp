#include <fstream> // библиотеки, но я уже не помню что к чему
#include <iostream>
using namespace std; // просто надо

int main()
{
	char string[50];
	int i;
	i = 0;
	ifstream file("opp.txt"); // считывание из файла
	while (!file.eof())
	{
		file >> string[i];
		i++;
	}

	file.close(); // закрытие файла

	switch (string[1]) // выбор операции 
	{
	case '+':
	{
		cout << string[0] + string[2];
		break;
	}
	case '-':
	{
		cout << string[0] - string[2];
		break;
	}
	case '*':
	{
		cout << string[0] * string[2];
		break;
	}
	case '/':
	{
		cout << string[0] / string[2];
		break;
	}
	default:
	{
		cout << "Bro, you brought such a shit, that my (not the most the best (there is no) ) program not can this fulfill";
	}
	}

	system("pause");
	return 0;
}