#include <fstream> // ����������, �� � ��� �� ����� ��� � ����
#include <iostream>
using namespace std; // ������ ����

int main()
{
	char string[50];
	int i;
	i = 0;
	ifstream file("opp.txt"); // ���������� �� �����
	while (!file.eof())
	{
		file >> string[i];
		i++;
	}

	file.close(); // �������� �����

	switch (string[1]) // ����� �������� 
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