#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;

class operate
{
    char str[25]; // Classes object of string
public:
    void operator+(char s[25])
    {
        strcat(str, " ");
        strcat(str, s);
    }

    void operator=(char s[25])
    {
        strcpy(str, s);
    }

    void operator<=(char s[25])
    {
        if (strcmp(str, s) > 0)
        {
            cout << str << " is larger than " << s;
        }
        else if (strcmp(str, s) < 0)
        {
            cout << s << " is larger than " << str;
        }
        else
        {
            cout << str << " is equal to " << s;
        }
    }

    void strlen()
    {
        int l = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            l++;
        }
        cout << "\n The length of String is: " << l;
    }
    void toupper()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 97) && (str[i] <= 122))
            {
                str[i] = str[i] - 32;
            }
        }
    }
    void tolower()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 65) && (str[i] <= 90))
            {
                str[i] = str[i] + 32;
            }
        }
    }

    void display()
    {
        cout << "Final string -----------> " << str << endl;
    }
};

int main()
{
    char s[100], st[100], ch;

    cout << "Enter 2 strings u want to compare and check equal or not" << endl;
    cin >> s >> st;

    operate r;
    cout << "\n\nChoose whether u want to \n1)string length \nconcat'+' \n2)to Upper \ncompare'<' \n3) to lower \ncopy'=' \nexit(x)\n\n";
    //Invoking different operators
    cin >> ch;
    while (ch != 'x')
    {
        switch (ch)
        {
        case '+':
            r + st;
            r.display();
            break;

        case '=':
            r = st;
            r.display();
            break;

        case '<':
            r <= st;
            break;

        case 1:
            r.strlen();
            break;

        case 2:
            r.toupper();
            r.display();
            break;

        case 3:
            r.tolower();
            r.display();
            break;

        case 'x':
            cout << " Exit";
            exit(0);
        }
        cout << "\n\nChoose whether u want to \n1)string length \nconcat'+' \n2)to Upper \ncompare'<' \n3) to lower \ncopy'=' \nexit(x)\n\n";
        //Invoking different operators
        cin >> ch;
    }
    return 0;
}
