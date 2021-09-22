#include <iostream>

using namespace std;


int main()
{
    int x, y;
    cout << "Enter number 1 : ";
    cin >> x;
    cout << "Enter number 2 : ";
    cin >> y;
    try
    {
        if (y == 0)
        {
            throw y;
        }
        else
        {
            cout << "After Dividing : " << (x / y);
        }
    }
    catch (int)
    {
        cout << "Exception Caught :  Cannot divide by Zero";
    }
    return 0;
}