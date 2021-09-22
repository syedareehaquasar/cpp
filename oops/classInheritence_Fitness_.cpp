#include <iostream>
#include<string>
using namespace std;

class basic_info
{
    string name;
    int rno;
    char sex;

public:
    void getdata();
    void putdata();
};

void basic_info::getdata()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter rollno: ";
    cin >> rno;
    cout << "Enter sex: ";
    cin >> sex;
}

void basic_info::putdata()
{
    cout << "\n\n\n";
    cout << "Name     : " << name << endl;
    cout << "Roll No. : " << rno << endl;
    cout << "Sex      : " << sex << endl;
}

class phy_fit : public basic_info
{
    float ht;
    float wt;

public:
    void input()
    {
        getdata();
        cout << "Enter height (in cms): ";
        cin >> ht;
        cout << "\nEnter weight (in kg): ";
        cin >> wt;
    }
    void display()
    {
        putdata();
        cout << "\nHeight  : " << ht;
        cout << "\nWeight  : " << wt;
    }
};

main()
{
    phy_fit obj;
    obj.input();
    obj.display();

    return 0;
}