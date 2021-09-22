#include <iostream>

using namespace std;

class basic_info
{
    char name[10], sex;
    int rollno;

public:
    void getdata()
    {
        cout << "Enter rollno,name and sex : ";
        cin >> rollno >> name >> sex;
    }
    void display()
    {
        cout << "Name: " << name << "\nRoll no. :" << rollno << "\nSex: " << sex;
    }
};

class physical_fit : public basic_info
{
    float height, weight;

public:
    void getdata()
    {
        basic_info::getdata();
        cout << "Enter height and weight ";
        cin >> height >> weight;
    }
    void display()
    {
        basic_info::display();
        cout << "Height :" << height;
        cout << "\nWeight :" << weight;
    }
};

int main()
{
    physical_fit p;
    p.getdata();
    p.display();
    return 0;
}