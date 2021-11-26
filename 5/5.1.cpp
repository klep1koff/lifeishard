#include<iostream>
using namespace std;
int
main ()
{
  int i , j, sum1, sum2, sum3;
  
  int a[3][3], m;
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  cout << "element [" << i + 1 << "][" << j + 1 << "] = ";
	  cin >> a[i][j];
	    }
    }
   
	    sum1 = 0;
	    sum2 = 0;
	    sum3 = 0;
        for (i = 0; i < 3; i++) 
            for (j = 0; j < 3; j++)
        {       
            if (a[i][j] % 2 == 0)
                {
                    sum1 += a[i][j];
                }
            else if (a[i][j] % 2 == 0)
                {
                    sum2 += a[i][j];
                }  
            else if (a[i][j] % 2 == 0)
                {
                    sum3 += a[i][j];
                }    
        }
        cout << " summ 1 = "  <<  sum1 << " summ 2 = "  <<  sum2<< " summ 2 =  "  <<  sum3; 
     cout << endl;
 return 0; 
}
