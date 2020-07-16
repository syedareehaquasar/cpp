#include <iostream>
using namespace std;

int redundantBraces(string s)
{
    int operatorCount = 0;
    int bracesCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '(' && s[i + 2] == '(') || (s[i] == '(' and s[i + 1] == ')'))
        {
            return 1;
        }
        else if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
        {
            operatorCount += 1;
        }
        else if (s[i] == '(')
        {
            bracesCount += 1;
        }
    }
    if (bracesCount > operatorCount)
    {
        return operatorCount;
    }
    return 0;
}


int main()
{
    string s;
    getline(cin, s);
    cout << redundantBraces(s) << endl;
    return 0;
}