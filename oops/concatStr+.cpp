#include <iostream>
#include <cstring>

using namespace std;

// concatenating 2 strings
class concatString{
    public:
        char str[100]; // class object

        concatString(){} // no parameter constructor

        // initalising class variable 
        concatString(char s[]){
            strcpy(this->str, s);
        }

        // overloading operator+ for concatenation
        concatString operator+(concatString& s2){
            concatString s3;
            strcat(this->str, s2.str);
            strcpy(s3.str, this->str);
            return s3;
        }
};

int main(){
    char s1[100], s2[100];

    cout << "Enter 2 strings u want to concatenate" << endl;
    cin >> s1 >> s2;

    concatString a1(s1);
    concatString a2(s2);
    concatString a3;

    a3 = a1 + a2;

    cout << "concatenation: " << a3.str;

    return 0;
}