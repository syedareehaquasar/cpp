#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> fizbuzz(int);
int pick(int);

int pick(int n) {
    return (n % 3 == 0) + 2 * (n % 5 == 0);
}

vector<string> fizbuzz(int n) {
    vector<string> fizbuzz;
    for (int i = 1; i <= n; i++) {
        string options[4] = {to_string(i), "Fizz", "Buzz", "FizzBuzz"};
        fizbuzz.push_back(options[pick(i)]);
    }
    return fizbuzz;
}

int main(int argc, char *argv[]) {
    const char SPACE = ' ';
    int n = 100;
    for (const string fb : fizbuzz(n)) {
        cout << fb << SPACE;
    }
    cout << endl;
    return 0;
}