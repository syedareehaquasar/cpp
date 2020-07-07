#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string name, full_name;
    cout << "Hello World" << endl;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "hello" << name << endl;
    getline(cin, full_name);
    getline(cin, name);
    cout << full_name << "$" << name << endl;
    cout << "welcome to c++" << endl;
    return 0;
}

