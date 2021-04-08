#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;
        friend int greatest(ClassA, ClassB);

    public:
        void input() {
            cout << "Enter number for class A:";
            cin >> numA;
        }
};

class ClassB {
    private:
        int numB;
        friend int greatest(ClassA, ClassB);
    
    public:
        void input() {
            cout << "Enter number for class B:";
            cin >> numB;
        }
};

int greatest(ClassA objectA, ClassB objectB) {
    return max(objectA.numA, objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    objectA.input();
    objectB.input();
    cout << "Greatest: " << greatest(objectA, objectB);
    return 0;
}