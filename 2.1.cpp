#include <iostream>
#include <string>
#include <vector>
using namespace std;

void fsort(vector <int>& numb) {
    for (int i = 0; i < numb.size(); ++i) {
        for (int j = 0; j < numb.size() - i - 1; ++j) {
            if (numb[j] < numb[j + 1])
                swap(numb[j + 1], numb[j]);
        }
    }
}

int main() {
	int numb;
	cout << "Choose the first if you want to take a ready-made, and the second if you want to create" << endl;
	cin >> numb;

	switch (numb)
	{
    case 1:
	    {
        int s;
        ifstream file;
        ofstream file2;
        ofstream file3;
        vector <int> arr;
        vector <int> arr2;
        vector <int> arr3;
        file.open("f1.txt");
        file2.open("f2.txt");
        file3.open("f3.txt");
        for (file >> s; !file.eof(); file >> s)
        {
            if (s % 2 == 0) {
                arr2.emplace_back(s);
            }
            else
            {
                arr3.emplace_back(s);
            }
        }

        fsort(arr2);
        fsort(arr3);

        for (int i : arr2)
        {
            file2 << i << endl;
        }
        for (int i : arr3)
        {
            file3 << i << endl;
        }

	    }
    case 2:
	    {
        string name;
        ifstream file;
        ofstream file2;
        ofstream file3;
        int s, size, num;
        vector <int> arr;
        vector <int> arr2;
        vector <int> arr3;
		cout << "enter file name" << endl;
		cin >> name;
		ofstream ost(name + ".txt");
        file.open(name + ".txt");
        file2.open("f2.txt");
        file3.open("f3.txt");

    	cout << "Enter the set of numbers to be entered" << endl;

        cin >> size;

		for (int i = 0; i < size ; i++)
		{
            cin >> num;
			arr.emplace_back(num);
		}

        for (file >> s; !file.eof(); file >> s)
        {
            if (s % 2 == 0) {
                arr2.emplace_back(s);
            }
            else
            {
                arr3.emplace_back(s);
            }
        }

        fsort(arr2);
        fsort(arr3);

        for (int i : arr2)
        {
            file2 << i << endl;
        }
        for (int i : arr3)
        {
            file3 << i << endl;
        }

	    }
	}
}
