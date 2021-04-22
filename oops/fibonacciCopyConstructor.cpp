#include <iostream>
using namespace std;

class fibonacci{
    private:
        unsigned long int f0, f1, fib;

    public :
        fibonacci(){
            f0 = 0;
            f1 = 1;
            fib = f0 + f1;
        }

        void update(){
            f0 = f1;
            f1 = fib;
            fib = f0 + f1;
        }

        void displayFib(int upto){
            for (int i = 0; i <= upto; i++) {
                cout << fib << "  ";
                update();
            }
        }
}; //end of class construction


int main(){
    fibonacci fibObj;
    int upto;
    cout << "Enter the number uptill you want Fibobnacci to be listed: ";
    cin >> upto;
    cout << endl;
    fibObj.displayFib(upto);
    cout << endl;

    return 0;
}