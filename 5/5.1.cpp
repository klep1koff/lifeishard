#include <iostream>
using namespace std;

int
main()
{
	int a[3] = { 1, 8, 3 };
	int sum1 = 0;
	int m = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < m; i++)
	{
		cout << a[i];
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum1 = sum1 + a[i];
		}

	}


	int b[3] = { 1, 2, 3 };
	int sum2 = 0;
	int n = sizeof(b) / sizeof(b[0]);
	for (int i = 0; i < n; i++)
	{
		cout << b[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (b[i] % 2 == 0)
		{
			sum2 = sum2 + b[i];
		}

	}


	int c[3] = { 1, 2, 3 };
	int sum3 = 0;
	int k = sizeof(c) / sizeof(c[0]);
	for (int i = 0; i < k; i++)
	{
		cout << c[i];
	}
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		if (c[i] % 2 == 0)
		{
			sum3 = sum3 + c[i];
		}

	}

	cout << endl << sum1 << endl << sum2 << endl << sum3 << endl;

	/*
	if ((sum1>sum2)&&(sum2>sum3))
	 cout <<  sum1 << " - max";

	else if ((sum2>sum1)&&(sum2>sum3))
	cout << sum2 << " - max";

	else if ((sum3>sum1)&&(sum3>sum2))
	cout << sum3 << " - maksimalnoe.";

	else (sum1==sum2==sum3);
	cout << " - equal";
	*/

}


/*#include"iostream"
using namespace std;
int
main ()
{
  int n, m;
  cout << "Enter number of lines : "; // i //
  cin >> n;
  cout << "Enter number of columns : "; // j //
  cin >> m;
  int a[n][m];
  cout << "Enter elements of array : " << endl;
  for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < m; j++)
 {
   cout << "element [" << i+1 << "][" << j+1 << "] = ";
   cin >> a[i][j];
 }
    }
  cout << "array :" << endl;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
 cout << a[i][j] << " ";
      cout << endl;
    }
  return 0;
}
*/
