#include <iostream>
#include <vector>

using namespace std;

int zeros(int);

int main(){
    int n;
    cin >> n;
    cout << zeros(n) << endl;
    return 0;
}

int zeros(int n){
    int i = 5;
    int count = 0;
    while (n <= i){
        count += 1;
        i += 5;
    }
    return count;
}