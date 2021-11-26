#include <iostream>
using namespace std;
int main()
{
    int m[4] = {-1,2,3,4};
    int b[4]; 
    int i, n;
    n=4;
    for(i=0; i < n; i++)
        {
      cout << m[i];
        }
        
    cout << endl;    
        
    for (i=0; i < n; i++) 
     {
         b[i] = m[i];
         if (b[i] * b[i + 1] > 0) 
      { 
			cout<< b[i] << "," << 999 << "," ;
        }
        
        else {
            cout << b[i] << ",";
        }
     }  
    return 0;
}
