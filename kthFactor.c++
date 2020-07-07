// #include <iostream>
// #include <vector>
// #include <math.h>

// using namespace std;

// vector<int> fac(int);

// int main(int argc, char *argv[])
// {

//     int n = stoi(argv[1]);
//     vector<int> factors = fac(n);

//     for (const int c : factors)
//     {
//         cout << c << endl;
//     }
//     return 0;
// }

// vector<int> fac(int n)
// {
//     vector<int> series;
//     for (int i = 1; i <= n + 1; i++)
//     {
//         if (n % i == 0)
//         {
//             series.push_back(i);
//         }
//     }
//     return series;
// }

#include <iostream>
#include <vector>

using namespace std;

vector<int> factor(int);

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> fac = factor(n);
    cout << fac.at(k - 1) << endl;
}

vector<int> factor(int n){
    vector<int> factors;
    for (int i = 1; i <= n + 1; i++ ){
        if (n % i == 0){
            factors.push_back(i);
        }
    }
    return factors;
}
