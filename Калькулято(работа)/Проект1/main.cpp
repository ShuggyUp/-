#include <iostream> 
using namespace std;

int main()
{
	double a, b, c;
	char x;
	cout << "������� ������ �����";
	cin >> a;
	cout << "������� ������ �����";
	cin >> b;
	cout << "������� ��������";
	cin >> x;
	switch (x)
	{
	case '+' :
	{
		cout << a + b;
		break;
	}
	case '-' :
	{
		cout << a - b;
		break;
	}
	case '*' :
	{
		cout << a * b;
		break;
	}
	case '/' :
	{
		cout << a / b;
		break;
	}
	default:
	{
		cout << "������, �� ���� ����� �����, ��� ��� (�� ����� ������ (���) ) ��������� �� ����� ��� ���������";
	}
	}
	system("pause");
	return 0;
}