// #include <iostream>
// #include <vector>

// using namespace std;

// int zeros(int);

// int main(){
//     int n;
//     cin >> n;
//     cout << zeros(n) << endl;
//     return 0;
// }

// int recur_factorial(int n){
//     if (n < 0){
//         return -1;
//     }
//     if (n == 0){
//         return 1;
//     }
//     return n * recur_factorial(n-1);
// }

// int zeros(int n){
//     int factorial = recur_factorial(n);
//     int count;
//     while (n != 0){
//         if (n % 10 == 0){
//             count += 1;
//         }
//         else{
//             break;
//         }
//         n /= 10;
//     }
//     return count;
// }

#include <iostream>

using namespace std;

int trailingZeros(int);

int main()
{
    int n;
    cin >> n;
    cout << trailingZeros(n) << endl;
    return 0;
}

int trailingZeros(int n)
{
    int zeros = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        zeros += n / i;
    }
    return zeros;
}