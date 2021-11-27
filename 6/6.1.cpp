#include<iostream>
using namespace std;
int main ()
{
  cout << "enter elements of array "<< endl;	
  int a[3][3], m;
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  cout << "element [" << i + 1 << "][" << j + 1 << "] = ";
	  cin >> a[i][j];
	}
    }
  cout << endl;

  for (int i = 0; i < 3; i++)
    {
      int b[i];
      int min = a[i][0];
      for (int j = 1; j < 3; j++)
	if (a[i][j] <= min)
	  {
	    min = a[i][j];
	    m = j + 1;
	  }
      b[i] = min;
      cout << "min " << b[i] << " ";
      m = 0;
    }
  return 0;
}
