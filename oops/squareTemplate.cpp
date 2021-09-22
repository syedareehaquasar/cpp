#include <iostream>

using namespace std;

template <class T>
inline T square(T x)
{
    T result;
    result = x * x;
    return result;
};

int main()
{
    int i, ii;
    float x, xx;
    double y, yy;

    i = 2;
    x = 3;
    y = 4;

    ii = square<int>(i);
    cout << i << ": " << ii << endl;

    xx = square<float>(x);
    cout << x << ": " << xx << endl;

    // Explicit use of template
    yy = square<double>(y);
    cout << y << ": " << yy << endl;

    // Implicit use of template
    yy = square(y);
    cout << y << ": " << yy << endl;
    return 0;
}