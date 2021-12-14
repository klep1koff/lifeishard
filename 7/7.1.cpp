#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	const int N = 4;
	int  i, j, min;
	int matrix[N][N];

	cout << "Matrix: " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % (100);
			cout << matrix[i][j] << " ";
		}
		cout << endl << endl;
	}

	//    

	//

	return 0;
}
