#include <iostream>
using namespace std;
#define N 4 
int main()
{
 int  i, j, sum;
    int matrix[N][N];
 
    cout << "Matrix: " << endl;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            matrix[i][j] = rand()%(10);
            cout << matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
 
    
 
    for(j = 0; j < N; j += 1)
    {
        sum = 0;
        for(i = 0; i < N; i++)
        if (matrix[i][j] % 2 == 0)
        {
            sum += matrix[i][j];
        }
        cout << "Summ " << j + 1 << " line = " << sum << endl;
    }
 
    return 0;
}
