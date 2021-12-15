// 9 prog
..
	

// 10 prog

#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main(int argc, char** argv) {
 
    string text;
    cout << "enter text: ";
    cin >> text;
 
    for (char check : text) {
        if (!isalpha(check)) {
            cout << "The text must not contain numbers" << endl;
            return 0;
        }
    }
 
    map<char, int> mp;
 
    for (char ch : text)
        mp[ch] += 1;
 
    for (const auto& p : mp)
        if (p.second == 1 )
        {
            cout << p.first;
            cout << endl;
        }
 
    return 0;
}
