#include <iostream>   
#include <algorithm>   
using namespace std;
int main()
{
	int m[3] = { 1, -1, 3 };
	int min1 = m[0];
	for (int i = 0; i < 3; ++i)
	{
		if (m[i] < min1)
		{
			min1 = m[i];
		}

	}
	cout << min1 << "  ";

	int n[3] = { 1, 3, 0 };
	int min2 = n[0];
	for (int i = 0; i < 3; ++i)
	{
		if (n[i] < min2)
		{
			min2 = n[i];
		}

	}
	cout << min2 << "  ";

	int k[3] = { 10, 1, 9 };
	int min3 = k[0];
	for (int i = 0; i < 3; ++i)
	{
		if (k[i] < min3)
		{
			min3 = k[i];
		}

	}
	cout << min3 << "  ";
}