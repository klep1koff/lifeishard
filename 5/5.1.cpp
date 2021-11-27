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
            for (j = 0; j < 3; j++)
        {       
            if (a[0][j] % 2 == 0)
                {
                    sum1 += a[0][j];
                }
            else if (a[1][j] % 2 == 0)
                {
                    sum2 += a[1][j];
                }  
            else if (a[2][j] % 2 == 0)
                {
                    sum3 += a[2][j];
                }    
        }
        cout << " summ 1 = "  <<  sum1 << " summ 2 = "  <<  sum2<< " summ 2 =  "  <<  sum3; 
     cout << endl;
 return 0; 
}





\\ tupoe reshenie \\

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
	    int sum11 = 0;
	    int sum12 = 0;
	    int sum13 = 0;
	    sum2 = 0;
	    int sum21 = 0;
	    int sum22 = 0;
	    int sum23 = 0;
	    sum3 = 0;
	    int sum31 = 0;
	    int sum32 = 0;
	    int sum33 = 0;
            if (a[0][0] % 2 == 0)
                {
                    sum11 += a[0][0];
                }
            if (a[0][1] % 2 == 0)
                {
                    sum12 += a[0][1]; 
                }  
                
            if (a[0][2] % 2 == 0)
                {
                    sum13 += a[0][2];
                }
                
                sum1 = sum11 + sum12 + sum13;
               
     
            
            
            if (a[1][0] % 2 == 0)
                {
                    sum21 += a[1][0];
                }
            if (a[1][1] % 2 == 0)
                {
                    sum22 += a[1][1]; 
                }  
                
            if (a[1][2] % 2 == 0)
                {
                    sum23 += a[1][2];
                }
            sum2 = sum21 + sum22 + sum23;    
            
            
            
            
            
            if (a[2][0] % 2 == 0)
                {
                    sum31 += a[2][0];
                }
            if (a[2][1] % 2 == 0)
                {
                    sum32 += a[2][1]; 
                }  
                
            if (a[2][2] % 2 == 0)
                {
                    sum33 += a[2][2];
                }
            sum3 = sum31 + sum32 + sum33;    
             
     
     
    cout << " summ 1 = "  <<  sum1 << " summ 2 = "  <<  sum2<< " summ 2 =  "  <<  sum3;
    
    if 
     
     cout << endl;
     
 return 0; 
}
