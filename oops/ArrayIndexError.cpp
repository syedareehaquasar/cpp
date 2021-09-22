#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int i;
    cout << "Size of array is : " << n << endl;
    cout << "Which index you want to access : ";
    cin >> i;
    try
    {
        if (i >= n)
        {
            throw i;
        }
        else
        {
            cout << "Element at " << i << " is : " << arr[i];
        }
    }
    catch (int)
    {
        std::cout << "Exception caught : Accessing index beyond of array size";
    }

    return 0;
}