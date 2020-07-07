#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> num2digits(int);

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    vector<int> num2digits(n);
    for (const int c : num2digits){
        cout << c;
    }
    cout << endl;
    return 0;
}

vector<int> num2digits(int num){
    vector<int> digits;
    while (num != 0){
        digits.push_back(num % 10);
        num /= 10;
    }
    return digits;
}

int next
// bool is_kaprekar(vector<int> v)
// {
//     return v == sort(v.begin(), v.end());
// }
