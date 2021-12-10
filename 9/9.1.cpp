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
		cout << "True";
	}
	else
	{
		cout << "Not true";
	}

	return 0;
}

// 10 prog

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {

string text;
cout << "enter text: ";
cin >> text;

map<char, int> mp;

for (char ch : text)
mp[ch] += 1;

for (const auto &p : mp)
if (p.second == 1)
{
cout << p.first;
cout << endl;    
}
else {
    cout << "nothing absolutely ";
}

return 0;
}
