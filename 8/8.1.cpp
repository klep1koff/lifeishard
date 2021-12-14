#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int sravnenie, dig_int;
	string dig, temp;
	string text = "9abobabiba";
	dig = text[0];
	dig_int = stoi(dig);
	temp = text;
	temp = temp.erase(0, 1);
	sravnenie = temp.size();
	if (sravnenie == dig_int)
	{
		cout << "True";
	}
	else
	{
		cout << "Falce";
	}

	return 0;
}
