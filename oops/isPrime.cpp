#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
	if (n < 2) return false;
	for (int i = 2; i < n; ++i) {
		if ((n % i) == 0) return false;
	}
	return true;
}

bool isPrime1(int n){
    if (n < 2) return false;
    if (n % 2 == 0) return false;
    for (int i = 2; i < sqrt(n); ++i) {
		if ((n % i) == 0) return false;
	}
	return true;
}

int main() {
    cout << "Enter the number you wan to check whether prime or not";
    int n;
    cin >> n;
    cout << "result = " << isPrime(n);
    cout << "result = " << isPrime1(n);
    return 0;
}
