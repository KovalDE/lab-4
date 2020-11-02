#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = abs(4*x-1);
		if (x < 0)
			B = ((x * x * x * x * x * x * x) - (2 * x));
		if (0 <= x && x < 3)
			B =atan((exp(x) + 1) / 8);
		if (x >= 3)
			B = (x * x * x * x) + exp((x * x) + 3);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}