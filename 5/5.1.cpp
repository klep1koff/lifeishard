#include <iostream>
#include <string>
using namespace std; 
int main()
{
	const int N = 4;
    int  i, j, sum;
    int sum_temp = 0;
    int matrix[N][N];

    cout << "Matrix: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "element [" << i + 1 << "][" << j + 1 << "] = ";
	        cin >> matrix[i][j];
            
        }
        cout << endl << endl;
    }
	
    for (j = 0; j < N; j++)
    {
        sum = 0;
        for (i = 0; i < N; i++)
            if (matrix[i][j] % 2 == 0)
            {
                sum += matrix[i][j];
            }
        if (sum > sum_temp)
            sum_temp = sum;

        cout << "Summ " << j + 1 << " line = " << sum << endl;
    }
    cout << "Max summ is : " << sum_temp << endl;

    return 0;
}
