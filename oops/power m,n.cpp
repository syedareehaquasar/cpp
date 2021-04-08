#include <iostream>
using namespace std;

float power(double base, int powr = 0){
    if (powr == 0) {
        return base * base;
    }
    float res = 1;
    for (int i = 0; i < powr; ++i) {
        res *= base;
    }
    return res;
}

int main(){
    int powr;
    double base;
    cout << "Enter the number whose power you want to calculate:- " << endl;
    cin >> base;
    cout << "Enter the power of the base:- " << endl;
    cin >> powr;
    cout << "The result of " << base << " to the power " << powr << " is " << power(base, powr) << endl;
    return 0;
}