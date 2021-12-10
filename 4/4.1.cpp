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



/*
#include <iostream>
 
using namespace std;
 
double* insert(double* array, size_t arraySize, size_t position, double value) {
    double* newArray = new double[arraySize + 1];
 
    for(size_t i = 0; i < arraySize; i++) {
        newArray[i < position ? i : i + 1] = array[i];
    }
 
    newArray[position] = value;
    return newArray;
}
 
int main() {
    size_t n;
    double x;
    cout << "enter number of elements : ";
    cin >> n;
    x = 999;
 
    double* array = new double[n];
 
    for(size_t i = 0; i < n; i++)
        {
      cout << "enter element [" << i + 1 << "] : ";
      cin >> array[i];
        } 
        
 
    for(size_t i = 0; i + 1 < n; i++) {
        if(array[i] * array[i + 1] > 0) {
            array = insert(array, n, i + 1, x);
            ++n;
            ++i;
        }
    }
 
    for(size_t i = 0; i < n; i++)
        cout << array[i] << " ";
 
    cout << endl;
}
*/
