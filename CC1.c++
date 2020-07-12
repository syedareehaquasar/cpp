// ques - https://www.codechef.com/WETS0220

#include <iostream>
#include <set>

using namespace std;

string is_readable(string word, set<char> letters)
{
    for (char c : word)
    {
    //    if (strchr(letters.c_str(),c))
        if (letters.find(c) == letters.end())
        {
            return "NO";
        }
    }
    return "YES";
}

int main(int argc, char *argv[])
{
    string known_letters;
    cin >> known_letters;
    set<char> letters (begin(known_letters), end(known_letters));

    int tc;
    cin >> tc;

    string word;
    for (int i = 0; i < tc; i += 1)
    {
        cin >> word;
        cout << is_readable(word, letters) << endl;
    }
    return 0;
}
