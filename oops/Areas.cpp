#include <iostream>
using namespace std;

int area(int l, int b){
    return l * b;
}

float area(float r){
    return 3.14 * r * r;
}

float area(float b, float h){
    return (b * h)/2;
}

int main(){
    int l, b;
    float r, ba, he;
    cout << "Enter length and breadth of rectangle" << endl;
    cin >> l >> b;
    cout << "Area of rectangle is: " << area(l, b) << endl;
    cout << "Enter radius for circle"<<endl;
    cin >> r;
    cout << "Area of circle is: " << area(r) << endl;
    cout << "Enter base and height of triangle" << endl;
    cin >> ba >> he;
    cout << "Area of triangle is: " << area(ba, he) << endl;
    return 0;
}
