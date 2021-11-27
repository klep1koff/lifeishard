#include <iostream>
using namespace std;
int main()

{
	int n, k, y;
	cout << "enter integer n";
	cin >> n;
	y = 1;
	for (k = 1; k <= n; k++)
	{
	  y = y * k;
	}
	
	y = y * 2;
	cout << "result " << y;

	return 0;
}
