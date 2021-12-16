// 9 prog
#include <iostream>
#include <string> 
using namespace std;
int main()
{
    const string a = "biba boba aboba biba";
    int b = a.find_last_of(' ');
    string last = a.substr(++b),word;
    int  start = 0, finish = 0, size = 0;
    while (start <= a.length()){
        finish = a.find(' ', start);
        size = finish - start;
        word = a.substr(start, size);
        start = a.find_first_not_of(' ', finish);
        if (!(word == last) && !(word.size() % 2))
            cout << word << endl;
 
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
