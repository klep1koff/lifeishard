#include <iostream>
using namespace std;
int main()
{
    int b[10], i, n;
    cout << "enter size of array (max = 10): ";
    cin >> n; 
    for(i = 0; i < n; i++)
        {
      cout << "enter element [" << i + 1 << "] : ";
      cin >> b[i];
        }   
    cout << endl;
       
    for (i = 0; i < n-1; i++)
    {
    if (b[i] * b[i + 1] > 0)
      { 
	    cout<< b[i] << "," << 999 << "," ;
      }
    else   
    {
        cout << b[i] << ",";
    } 
    }
    
    if (i=n)
      {
        cout << b[n-1];
      }
    return 0;
}
