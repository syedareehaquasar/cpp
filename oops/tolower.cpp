#include <iostream>
#include <cstring>

using namespace std;

class caseChange
{
public:
    char str[25]; // Classes object of string

    void toupper()
    {
        cout << "Enter strings u want to uppercase:" << endl;
        cin >> str;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 97) && (str[i] <= 122))
            {
                str[i] = str[i] - 32;
            }
        }

        cout << "Uppered/capitalized final string is " << str;
    }
};

int main()
{
    caseChange obj;
    obj.toupper();
    return 0;
}