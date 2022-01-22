#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int srav, dig_int;
	string dig, temp;
	string text = "9iloveduck";
	dig = text[0];
	dig_int = stoi(dig);
	temp = text;
	temp = temp.erase(0, 1);
	srav = temp.size();
	if (srav == dig_int)
	{
		cout << "Yslovie istinoe";
	}
	else
	{
		cout << "Yslovie ne istinoe";
	}

	return 0;
}
