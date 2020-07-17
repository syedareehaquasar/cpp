#include <array>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    array<int, 26> all_letters = {0};
    string known_letters;
    int n;
    string word;
    bool can_read;
    cin >> known_letters;
    cin >> n;
    for (char ch : known_letters) {
        all_letters[ch - 'a'] = 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> word;
        can_read = true;
        for (char ch : word) {
            if (!(all_letters[ch - 'a'])) {
                cout << "No";
                can_read = false;
                break;
            }
        }
        if (can_read) {
            cout << "Yes";
        }
        cout << endl;
    }
    return 0;
}