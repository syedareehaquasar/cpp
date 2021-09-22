#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int rollNo;

public:
    void input()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnter roll no: ";
        cin >> rollNo;
    }
    void output()
    {
        cout << "\nNAME     : " << name;
        cout << "\nROLL NO. : " << rollNo;
    }
};

class exam : public student
{
    float marks[6];

public:
    void enterData();
    float add();
};

void exam::enterData()
{
    int i;
    input();
    cout << "\nEnter marks in six subjects (out of 100):\n";
    for (i = 0; i < 6; i++)
    {
        cin >> marks[i];
    }
}

float exam::add()
{
    int i = 0;
    float sum = 0;
    for (i = 0; i < 6; i++)
    {
        sum = sum + marks[i];
    }
    return sum;
}

class result : public exam
{
    float totalMarks;
    float percentage;

public:
    void display()
    {
        totalMarks = add();
        percentage = totalMarks / 6;
        output();
        cout << "\nTotal Marks: " << totalMarks << "/600";
        cout << "\nPercentage : " << percentage << "%";
    }
};

main()
{
    result r;
    r.enterData();
    r.display();
    return 0;
}