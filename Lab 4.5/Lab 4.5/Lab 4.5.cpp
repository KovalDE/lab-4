#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,R1,R2;
	bool t = false;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		
		if ((x * x + y * y) >= R2 * R2 && (x * x + y * y) <= R1 * R1)
		{
			t = true;
		}
		else
		{
			t = false;
		}
		if (t == true && x <= 0 && y <= 0)
		{
			cout << "yes" << endl;
		}
		if (t == true && x >= 0 && y >= 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	cout << endl << fixed;
	t = false;
	for (int i = 0; i < 10; i++)
	{
		x = (-R1) + (R1 - (-R1)) * rand() / RAND_MAX;
		y = (-R1) + (R1 - (-R1)) * rand() / RAND_MAX;
		if ((x * x + y * y) >= R2 * R2 && (x * x + y * y) <= R1 * R1)
		{
			t = true;
		}
		else
		{
			t = false;
		}
		if (t == true && x <= 0 && y <= 0)
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else
		if (t == true && x >= 0 && y >= 0)
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	}
	}
	