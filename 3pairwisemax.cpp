#include <iostream>

using namespace std;

string sol(int x, int y, int z)
{
    if (x == y && y == z)
    {
        string x, y, z;
        return "YES\n ", x, y, z, "\n";
    } 
    else if ((x == y || y == z || x == z) && (x < y || y < z || z < x)){
        int largest = max(max(x, y), z);
        int smallest = min(min(x, y), z);
    }
    return "NO";
}
int main()
{
    int n;
    cin >> n;
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        cout << sol(x, y, z) << endl;
    }
    return 0;
}