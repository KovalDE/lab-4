#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i,k;
	cout<< "i= ";
	cin>> i;
	S = 0;
	n = 1;
	while (n <= 10)

	{
		P = 1;
		k = 1;
		while (k <= n)

		{
			P *= k/i ;
			k++;

		}
		S += (1+P)/(i*i);
		n++;

	}
	cout << S <<endl;
	P = 1;
	n = 1;
	S = 0;
	do
	{
		P=1;
		k = 1;
		do
		{
			P *= k / i;
			k++;
		} while (k <= n);
		S += (1 + P) / (i * i);
		n++;
	} while (n <= 10);
	cout << S << endl;
	P = 1;
	n = 1;
	S = 0;
	for (n = 1; n <= 10; n++)

	{
		P = 1;
		for (k = 1; k <= n; k++)

		{
			P *= k / i;

		}
		S += (1 + P) / (i * i);

	}
	cout << S << endl;
	P = 1;
	n = 1;
	S = 0;
	for (n = 10; n >= 1; n--
		)

	{
		P=1;
		for (k = n; k >= 1; k--)

		{
			P *= k / i;
			
		}
		S += (1 + P) / (i * i);
	}
	cout << S << endl;
	return 0;
}