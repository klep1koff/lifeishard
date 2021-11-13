#include <iostream>
using namespace std;
int main()
{
    int m[4] = {-1,-1,3,4};
    int n = sizeof(m)/sizeof(m[0]);
    for(int i=0; i < n; i++)
        
      if ((m[i] > 0 && m[i + 1] > 0) || (m[i] < 0 && m[i + 1] < 0)) {
			cout<< m[i] << "," << 999 << "," ;
        }
        
        else {
            cout << m[i] << ",";
        }
    return 0;
}
