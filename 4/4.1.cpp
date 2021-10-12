#include "iostream"
using namespace std;

int main()
{
	int m[1000], n;
	cout << "enter amount of numbers ";
	cin >> n;
	cout << "enter elements of array " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	for (int i = 1; i < n; i++) {
		if ((m[i] > 0 && m[i - 1] > 0) || (m[i] < 0 && m[i - 1] < 0)) {


			cout << endl << m[i] << endl << "999" << endl << m[i - 1] << endl;
		}
	}

	return 0;
}





