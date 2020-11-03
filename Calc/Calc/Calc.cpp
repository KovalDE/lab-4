#include <iostream>
#include <iomanip>
#include <time.h>
#include<Windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	double a, i = 1, b, n;
	char c;
	string r;
	do
	{

		cout << "Введіть число - операцію - число" << endl;
		cout << "Перше число:  ";
		cin >> a;
		cout << endl;
		cout << "Операція:  ";
		cin >> c;
		cout << endl;

		cout << "Друге число:  ";
		cin >> b;
		cout << endl;

		if (c == '*') cout << a * b << endl;
		if (c == '+') cout << a + b << endl;
		if (c == '/') {

			if (b == 0)
			{
				cout << " НА 0 ділити не можна";


			}
			cout << a / b << endl;
		}
		if (c == '-') cout << a - b << endl;

		cout << "Бажаєте продовжувати користуватись калькулятором? Напишіть Так чи Ні " << endl;
		cin >> r;
	
		if (r == "Так") n = 1;
		else
		{
			n = 0;
			cout << "Гарного дня!" << endl;

		}
	} while (n == 1);
	

}