#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  
	double  N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 1;
	i = N;
	while (i <=10)
	{
		S *= 1.0 * ((i + (1 / (i * i))) / (sqrt(1 + (exp(1 / i)))));
		i++;
	}
	cout << S << endl;

	S = 1;
	i = N;
	do {
		S*= 1.0 * ((i + (1 / (i * i))) / (sqrt(1 + (exp(1 / i)))));
		i++;
	} while (i <=10);
	cout << S << endl;
	S = 1;
	for (i = N; i <= 10; i++)
	{
		S *= 1.0 * ((i + (1 / (i * i))) / (sqrt(1 + (exp(1 / i)))));
	}
	cout << S << endl;
	S = 1;
	for (i = 10; i >= N; i--)
	{
		S*= 1.0 * ((i + (1 / (i * i))) / (sqrt(1 + (exp(1 / i)))));
	}
	cout << S << endl;
	return 0;
	
}


