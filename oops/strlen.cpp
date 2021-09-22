#include <iostream>
#include <cstring>

using namespace std;

class strLength
{
public:
    char str[25]; // Classes object of string

    void strlen()
    {
        cout << "Enter strings u want to find length of:" << endl;
        cin >> str;

        int l = 0;
        
        for (int i = 0; str[i] != '\0'; i++)
        {
            l++;
        }
        
        cout << "\n The length of String is: " << l;
    }
};

int main()
{
    strLength obj;
    obj.strlen();
    return 0;
}