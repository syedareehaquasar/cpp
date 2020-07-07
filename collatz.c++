#include <iostream>

using namespace std;

int nextCollatz(int n){
    if( n % 2 == 0){
        return n /= 2;
    }
    return n * 3 + 1;
}

int collatz(int n){
    if( n == 4){
        return ;
    }
}
int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    if n == 4:
        cout >> [4, 2, 1];

    return 0;
}
