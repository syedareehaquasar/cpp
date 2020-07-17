#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
int diff(int);
int next(int);
vector<int> kap_seq(int);
vector<int> num_to_digits(int);
vector<int> digits_to_num(vector<int>);

int main(int argc, char *argv[]) {
    int n = stoi(argv[1]);
    for (const int k : kap_seq(n)) {
        cout << setw(6) << k;
    }
    cout << endl;
    return 0;
}

int next(int num) {
    string num_to_string = to_string(num);
    sort(num_to_string.begin(), num_to_string.end());
    int min_num = stoi(num_to_string);
    reverse(num_to_string.begin(), num_to_string.end());
    int max_num = stoi(num_to_string);
    return max_num - min_num;
}

vector<int> kap_seq(int num) {
    vector<int> kap = {num};
    int next_kap = next(num);
    while (kap.back() != next_kap) {
        kap.push_back(next_kap);
        next_kap = next(next_kap);
    }
    return kap;
}