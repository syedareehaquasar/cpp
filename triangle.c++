#include <iostream>

using namespace std;

int no_of_triangles(int, int);

int main()
{
    int start;
    cin >> start;
    int end;
    cin >> end;
    cout << no_of_triangles(start, end) << endl;
    return 0;
}

int no_of_triangles(int start, int end)
{
    int count = 0;
    for (int a = start; a <= end; a++)
    {
        for (int b = a + 1; b <= end; b++)
        {
            if ((a + b) <= end)
            {
                count += a - 1;
            }
            else
            {
                count += end - b;
            }
        }
    }
    return count;
}