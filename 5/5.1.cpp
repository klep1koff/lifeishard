#include<iostream>
using namespace std;
int main ()
{
  int i , j, sum1, sum2, sum3;
  
  int a[3][3];
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  cout << "element [" << i + 1 << "][" << j + 1 << "] = ";
	  cin >> a[i][j];
	    }
    }
   cout << endl;
   
	    sum1 = 0;
	    sum2 = 0;
	    sum3 = 0;
            for (j = 0; j < 3; j++)       
            if (a[0][j] % 2 == 0)
                {
                    sum1 += a[0][j];
                }
            for (j = 0; j < 3; j++)    
            if (a[1][j] % 2 == 0)
                {
                    sum2 += a[1][j];
                }
            for (j = 0; j < 3; j++)    
            if (a[2][j] % 2 == 0)
                {
                    sum3 += a[2][j];
                }    
        cout << "summ 1 = "  <<  sum1 << " ; " << " summ 2 = "  <<  sum2 << " ; " << " summ 2 =  "  <<  sum3 << " ; " << endl; 
     
    if ((sum1>sum2) && (sum1>sum3))
    cout << endl << "max summ is : "<< sum1;
    
    if ((sum2>sum1) && (sum2>sum3))
    cout << endl << "max summ is : "<< sum2;
    
    if ((sum3>sum2) && (sum3>sum1))
    cout << endl << "max summ is : "<< sum3;
     
    cout << endl;
 return 0; 
}
