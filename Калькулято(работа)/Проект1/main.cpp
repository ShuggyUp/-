#include <iostream> 
using namespace std;

int main()
{
	double a, b, c;
	char x;
	cout << "¬ведите первое число";
	cin >> a;
	cout << "¬ведите второе число";
	cin >> b;
	cout << "¬ведите операцию";
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
		cout << "Ѕратан, ты ввел такую хрень, что мо€ (не сама€ лучша€ (нет) ) программа не может это выполнить";
	}
	}
	system("pause");
	return 0;
}