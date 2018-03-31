#include <fstream>
#include <iostream> 
using namespace std;

int main ()
{
	ifstream fin("opp.txt");
	if (!fin.is_open())
		cout << "no";
	else
	{
		char x;
		while (fin.get(x))
			cout << x;
	}
	fin.close();
	system("pause");
}