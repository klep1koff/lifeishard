// 9 prog
#include <iostream>
#include <string> 
using namespace std;
int main()
{
    const string s = "biba boba aboba biba";
    int k = s.find_last_of(' ');
    string last_word = s.substr(++k),word;
    int  first = 0, last = 0, word_size = 0;
    while (first <= s.length()){
        last = s.find(' ', first);
        word_size = last - first;
        word = s.substr(first, word_size);
        first = s.find_first_not_of(' ', last);
        if (!(word == last_word) && !(word.size() % 2))
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
