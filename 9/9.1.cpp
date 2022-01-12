// 9 prog

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int  start = 0, finish = 0, size = 0;
    string a;
    cout << "Enter text: ";
    getline(cin, a);
    int b = a.find_last_of(' ');
    string last = a.substr(++b), word;
    while (start <= a.length()) {
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
#include <cctype>
#include <algorithm>


using namespace std;
 
int main(int argc, char** argv) {
    
    string text;
    cout << "enter text: ";
    getline(cin, text);
    
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    for (char check : text) {
        if (!isalpha(check)) {
            cout << "The text must not contain numbers" << endl;
            exit(0);
        }
    }
    
    map<char, int> mp;
    
    for (char ch : text)
        mp[ch] += 1;
    
    for (const auto &p : mp)
        if (p.second == 1)
            cout << p.first;
    cout << endl;
    

    return 0;
}


//2nd 10 prog 

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string a;
    cout << "Enter text: ";
    getline(cin, a);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    
    for (int i = 0; i < a.length(); i++)
    {
        if (!isalpha(a[i]))
        {
            continue;
        }

        if (a.find_first_of(a[i]) == a.find_last_of(a[i])) {
            cout << a[i] << endl;
        }
        else if (a.find_first_of(a[i]) != a.find_last_of(a[i])) {
            cout << "";
        }
        else {
            cout << "";
        }
    }
    return 0;
}
