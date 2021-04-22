#include<iostream>
using namespace std;

class factorial{
    int n, i, f;

    public:
        factorial(){
            cout << "Enter a number to calculate factorial of: ";
            cin>>n;

            f = 1;
            for (i = 1; i <= n; i++) {
                f = f * i;
            }
        }

        void executeFac() {
            cout << "Factorial of " << n << " is: " << f;
        }
};

int main() {

    factorial factObj1;
    factObj1.executeFac();

    return 0;
}