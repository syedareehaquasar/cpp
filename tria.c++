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
    for (int a = start; a <= end - 2; a++)
    {
        for (int b = a + 1; b <= end - 1; b++)
        {
            for (int c = b + 1; c <= end; c++)
            {
              if ((a + b > c) && (a + c > b) && (b + c > a))
              {
                count += 1;
              } 
            }
        }
    }
    return count;
}