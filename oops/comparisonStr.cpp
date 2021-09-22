#include <cstring>
#include <iostream>
#include <string.h>
  
using namespace std;

class equalString{
    public:
        char str[25]; // Classes object of string

        equalString(){} // no parameter constructor

        // Parametrized Constructor
        equalString(char s[]){
            strcpy(this->str, s); // Initialize the string to class object
        }
    
        bool operator<=(equalString s2)
        {
            if (strlen(str) <= strlen(s2.str))
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

    if (a1 <= a2) {
        cout << "First string is smaller than or equal to second " << endl;
    }
    else{
        cout << "Second string is smaller than first string" << endl;
    }
    return 0;
}