// https://www.codechef.com/WETS0220/problems/WETS0203

#include <bits/stdc++.h>

using namespace std;

int max_diff(int, int*);

int main(){
    int tc;
    cin >> tc;
    while (tc > 0){
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << max_diff(k, arr);
        tc -= 1;
    }
}

int max_diff(int k, int* arr){
    return 0;
}