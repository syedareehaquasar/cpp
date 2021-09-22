#include <iostream>
#include <string>
using namespace std;

class first
{
    int bno;
    char bname[50];

public:
    void input()
    {
        cout << "\nEnter Book No. ";
        cin >> bno;
        cout << "\nEnter Book name: ";
        cin >> bname;
    }
    void output()
    {
        cout << "\nBook No.  : " << bno;
        cout << "\nBook Name : " << bname;
    }
};
class second
{
    char author[25];
    char publisher[25];

public:
    void indata()
    {
        cout << "\nEnter Author: ";
        cin >> author;
        cout << "\nEnter Publisher: ";
        cin >> publisher;
    }
    void outdata()
    {
        cout << "\nAuthor    : " << author;
        cout << "\nPublisher : " << publisher;
    }
};
class third : public first, public second
{
    int pgn;
    int yr;

public:
    void in()
    {
        input();
        indata();
        cout << "\nEnter number of pages: ";
        cin >> pgn;
        cout << "\nEnter Release year  : ";
        cin >> yr;
    }
    void out()
    {
        output();
        outdata();
        cout << "\nNumber of pages: " << pgn;
        cout << "\nRelease Year   : " << yr;
    }
};

main()
{
    third t[5];
    int i, n;
    cout << "No. of details to be entered: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        t[i].in();
    }
    for (i = 0; i < n; i++)
    {
        cout << "\nDETAIL NO. " << i;
        t[i].out();
    }
    return 0;
}
