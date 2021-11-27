#include <iostream>
using namespace std;
int main()
{
    int m[4], b[4], i, n;
    n=4;
    for(i=0; i < n; i++)
        {
      cout << "enter element [" << i + 1 << "] : ";
      cin >> m[i];
        }
        
    cout << endl;
    
        
    for (i=0; i < n; i++) 
        b[i] = m[i];
     
       
    for (i=0; i < n; i++)
    {
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





#include <iostream>
using namespace std;
int main()
{
    int m[4], b[4], i, n;
    n=4;
    for(i=0; i < n; i++)
        {
      cout << "enter element [" << i + 1 << "] : ";
      cin >> m[i];
      b[i] = m[i];
        }   
    cout << endl;
       
    for (i=0; i < n; i++)
    {
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
