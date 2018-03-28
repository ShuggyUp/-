#include <iostream> 
using namespace std;

int main()
{
	double a, b, c;
	char x;
	cout << "Введите первое число";
	cin >> a;
	cout << "Введите второе число";
	cin >> b;
	cout << "Введите операцию";
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
		cout << "Братан, ты ввел такую хрень, что моя (не самая лучшая (нет) ) программа не может это выполнить";
	}
	}
	system("pause");
	return 0;
}
