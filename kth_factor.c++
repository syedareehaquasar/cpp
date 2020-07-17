#include <iostream>

using namespace std;

int kth_factor(int, int);

int kth_factor(int n, int k) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            k--;
            if (k == 0) {
                return i;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int n = stoi(argv[1]);
    int k = stoi(argv[2]);
    cout << kth_factor(n, k);
    return 0;
}