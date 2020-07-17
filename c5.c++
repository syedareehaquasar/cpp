#include <iostream>
#define lli long long int

using namespace std;

string is_correct_guess(int cats, int dogs, int guess) {
    lli max_legs = cats * 4 + dogs * 4;
    lli min_legs;
    if (2 * dogs < cats) {
        min_legs = ((cats - 2 * dogs) + dogs) * 4;
    } else {
        min_legs = 4 * dogs;
    }
    if (guess % 4) {
        return "no\n";
    }
    if (guess > max_legs || guess < min_legs) {
        return "no\n";
    }
    return "yes\n";
}

int main(int argc, char *argv[]) {
    int n;
    int cats, dogs, guess;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cats >> dogs >> guess;
        cout << is_correct_guess(cats, dogs, guess);
    }
    return 0;
}