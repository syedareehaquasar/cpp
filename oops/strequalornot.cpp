#include <iostream>
#include <cstring>
  
using namespace std;

class equalString{
    public:
        char str[25]; // Classes object of string

        equalString(){} // no parameter constructor

        // Parametrized Constructor
        equalString(char s[]){
            strcpy(this->str, s); // Initialize the string to class object
        }
    
        bool operator==(equalString s2)
        {
            if (strcmp(str, s2.str) == 0)
                return true;
            else
                return false;
        }
};

int main(){
    char s1[100], s2[100];

    cout << "Enter 2 strings u want to compare and check equal or not" << endl;
    cin >> s1 >> s2;

    equalString a1(s1);
    equalString a2(s2);

    if (a1 == a2) {
        cout << "Strings are equal" << endl;
    }
    else{
        cout << "Strings are not equal" << endl;
    }
    return 0;
}