#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    const int N = 4;
    int matrix[N][N];
    int i,j,k;
    
    cout << "Original Matrix: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matrix[i][j] = rand() % (100);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for (k = 1; k < N; k += 2) {
        for (i = 0; i < N - 1; i++) {
            for (j = 0; j < N - i - 1; j++) {
                if (matrix[j][k] > matrix[j + 1][k]) {
                    // меняем элементы местами
                    int temp = matrix[j][k];
                    matrix[j][k] = matrix[j + 1][k];
                    matrix[j + 1][k] = temp;
                }
            }
        }
    }
    cout << endl<< "Sorted Matrix: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
 
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
