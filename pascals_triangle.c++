#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector<int> row(int);
int factorial(int);

int factorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

vector<int> row(int n) {
    vector<int> row;
    for (int i = 0; i <= n; i++) {
        row.push_back(factorial(n) / (factorial(i) * factorial(n - i)));
    }
    return row;
}

int main(int argc, char *argv[]) {
    int rows = stoi(argv[1]);

    for (int i = 0; i < rows; i++) {
        for (const int r : row(i)) {
            cout << setw(4) << r;
        }
        cout << endl;
    }
    return 0;
}
