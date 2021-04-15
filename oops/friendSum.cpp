#include <iostream>
using namespace std;

class twoNum{
    private:
        int a, b;
        
    public:
        void input(){
           cout << "Enter 2 numbers: ";
           cin >> a >> b;
        }

        friend void sum(twoNum t);
};

void sum(twoNum t){
    cout << "First number is: " << t.a << endl;
    cout << "Second number is: " << t.b << endl;
    cout << "Sum of these numbers is " << t.a + t.b << endl;
}

int main(){
    twoNum t;
    t.input();
    sum(t);
    return 0;
}