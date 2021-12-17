#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int sravnenie, dig_int;
	string dig, temp;
	string text;
	cout << "enter text: ";
	cin >> text;
	dig = text[0];
	dig_int = stoi(dig);
	temp = text;
	temp = temp.erase(0, 1);
	sravnenie = temp.size();
	for (char check : temp) {
        if (!isalpha(check)) {
            cout << "The aftertext must'nt contain numbers" << endl;
            return 0;
        }
    }
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
