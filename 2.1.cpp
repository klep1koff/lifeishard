#include <iostream>
#include <string>
#include <vector>
#include <fstream>

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
	int s;
	cout << "Enter numbers in file numbers.txt " << endl
		<< "if number / 2 == 0 - number would be in numbers1.txt file"
		<< endl << "if not - in numbers2.txt " << endl << "Good luck!";
	ifstream file;
	ofstream file2;
	ofstream file3;
	vector <int> arr;
	vector <int> arr2;
	vector <int> arr3;
	file.open("numbers.txt");
	file2.open("numbers1.txt");
	file3.open("numbers2.txt");

	for (file >> s; !file.eof(); file >> s)
	{
		if (s % 2 == 0) {
			arr2.emplace_back(s);
		}
		else
		{
			arr3.emplace_back(s);
		}
		fsort(arr2);
		fsort(arr3);
	}

	for (int i = 0; i < arr2.size(); ++i) {
		file2 << arr2[i] << endl;
	}
	for (int i = 0; i < arr3.size(); ++i) {
		file3 << arr3[i] << endl;
	}

}