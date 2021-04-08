#include <iostream>
using namespace std;

class threeNumbers{
    private:
        int x, y, z;
        
    public:
        void input(){
           cout << "Enter three numbers: ";
           cin >> x >> y >> z;
        }

        friend void findLargest(threeNumbers t);
};

void findLargest(threeNumbers t){
    if (t.x > t.y && t.x > t.z) {
        cout << "Largest is:" << t.x;
    }
    else if (t.y > t.z) {
        cout << "Largest is:" << t.y;
    }
    else {
        cout << "Largest is:" << t.z;
    }
}

int main(){
    threeNumbers t;
    t.input();
    findLargest(t);
    return 0;
}