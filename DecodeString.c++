#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> decodeSeq(string encodedString)
{
    vector<int> seq;
    for (int i = 0; i <= encodedString.size(); ++i)
    {
        seq.push_back(i + 1);
    }
    for (int i = 0; i < encodedString.size(); ++i)
    {
        int j = i;
        while (encodedString[i] == 'D' && i < encodedString.size())
        i++;
        reverse(seq.begin() + j, seq.begin() + i + 1);
    }
    return seq;
}

int main()
{
    string encodedString;
    cin >> encodedString;
    vector<int> decodedStr;
    decodedStr = decodeSeq(encodedString);
    for (int i = 0; i < encodedString.size() + 1; i++)
    {
        cout << decodedStr[i];
    }
    cout << endl;
    return 0;
}