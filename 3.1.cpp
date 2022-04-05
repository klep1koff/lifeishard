#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string last_word(const string& str)
{
	if (str.empty())
	{
		cout << "No string\n";
	}

	int i = str.length() - 1;
	while (i >= 0 && str[i] != ' ')
	{
		i--;
	}
	string last_word;
	for (int j = i + 1; j < str.length(); j++)
	{
		last_word += str[j];
	}
	return last_word;
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

void swapchar(string& a) {
	a.insert(0, 1, a.back());
	a.pop_back();
}

void rev_swapchar(string& a) {
	a = a + a[0];
	a.erase(0, 1);
}

int main() {
	/*
	Напечатать все слова, отличные от последнего слова, предварительно преобразовав каждое из них по следующему правилу:
	перенести последнюю букву в начало слова.*/
	cout << "Enter text : \n";
	string str, lst;
	vector<string> v;
	getline(cin, str);
	lst = last_word(str);
	SplitString(str, v);
	v.pop_back();
	for (auto i : v) {
		swapchar(i);
		if (i != lst) {
			rev_swapchar(i);
			cout << "result is : " << i << "\n";
		}
	}
}
