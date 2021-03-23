#include <iostream>
#include <string>

using namespace std;

class details{
    public:
        string name;
        string address;
        int age;
        float salary;
    
    void getData() {
        cout << "Enter name" << endl;
        getline(cin, name);
        cout << "Enter address" << endl;
        getline(cin, address);
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter salary" << endl;
        cin >> salary;
    }
    void showdata();
};

void details :: showdata(){
    cout << "details of employee \n";
    cout << "name: " << name << endl;
    cout << "address: " << address << endl;
    cout << "age: " << age << endl;
    cout << "salary: " << salary << endl;
}

int main(){
    details d;
    d.getData();
    d.showdata();
    return 0;
}
