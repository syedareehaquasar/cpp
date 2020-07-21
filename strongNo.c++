#include <iostream>

using namespace std;

int recurfac(int n){
    if(n > 1){
        return n * recurfac(n - 1);
    }
    else{
        return 1;
    }
}

bool isStrong(int x){
    int n = x;
    int digit = 0;
    int res = 0;
    while(n){
        digit = n % 10;
        res += recurfac(digit);
        n /= 10;
    }
    return (res == x);
}

int main(int argc, char* argv[]) {
    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    for (int i = a; i < b; i++){
        if (isStrong(i)){
            cout << i << endl;
        }
    }
    return 0;
}