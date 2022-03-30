#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fsort(vector <string>& numb) {
	for (int i = 0; i < numb.size(); ++i) {
		for (int j = 0; j < numb.size() - i - 1; ++j) {
			if (numb[j] < numb[j + 1])
				swap(numb[j + 1], numb[j]);
		}
	}
}

void SplitString(string s, vector<string>& v) {

	string temp = "";
	for (int i = 0; i < s.length(); ++i) {

		if (s[i] == ' ') {
			v.push_back(temp);
			temp = "";
		}
		else {
			temp.push_back(s[i]);
		}

	}
	v.push_back(temp);

}

int main()
{
	vector<string> strings;
	string in;
	cout << "enter text : \n";
	getline(cin, in);
	SplitString(in, strings);
	fsort(strings);

	int count = 1;
	for (int i = 0; i < strings.size(); i++)
	{
		if (strings[i] == strings[i + 1])
		{
			count++;
		}
		else
		{
			cout << strings[i] << ":" << count << " ";
			count = 1;
		}
	}

}