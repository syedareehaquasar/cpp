#include <iostream>

using namespace std;

int trailing_zeros(int n) {
    int zeros = 0;
    int i = 5;
    while (n / i) {
        zeros += n / i;
        i *= 5;
    }
    return zeros;
}

int main(int argc, char *argv[]) {
    int n = stoi(argv[1]);
    cout << trailing_zeros(n);
}