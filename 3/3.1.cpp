#include "iostream"
using namespace std;

int main()
{
	int m[1000], n, sum1 = 0, sum2 = 0, k;
	cout << "enter amount of numbers ";
	cin >> n;
	cout << "enter elements of array " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}	
    for (int i = 0; i < n; i++)
    {
		if (i % 2 != 0)
		{
			sum2 = sum2 + m[i];
		}
		else {
			sum1 = sum1 + m[i];
		}
	}
	k = sum1 - sum2;
	cout << "difference of even numbers is " << k;
	return 0;
}
