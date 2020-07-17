#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int triangles_possible(int start, int end) {
    vector<int> range;
    int possible = 0;
    for (int i = start; i <= end; i++) {
        range.push_back(i);
    }
    sort(range.begin(), range.end());

    for (int largest_side = range.size() - 1; largest_side >= 1; largest_side--) {
        int left_side = 0;
        int right_side = largest_side - 1;
        while (left_side < right_side) {
            if (range[left_side] + range[right_side] > range[largest_side]) {
                possible += right_side - left_side;
                right_side--;
            } else
                left_side++;
        }
    }
    return possible;
}
int main() {
    int start, end;
    cin >> start;
    cin >> end;
    cout << triangles_possible(1, 50);
}
