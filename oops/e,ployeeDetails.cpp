#include <iostream>
#include <math.h>
using namespace std;

class details{
    public:
        char name[50];
        int age;
        float salary;
        int phoneNo;
    
    void getData() {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter salary" << endl;
        cin >> salary;
        cout << "Enter phoneNo" << endl;
        cin >> phoneNo;
    }
    void showdata();
};

void details :: showdata(){
    cout << "details of employee \n";
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "salary: " << salary << endl;
    cout << "phoneNo: " << phoneNo << endl;
}

int main(){
    details d;
    d.getData();
    d.showdata();
    return 0;
}
