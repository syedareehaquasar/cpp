#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA
{

public:
    // constructor to initialize numA to 12
    ClassA() : numA(12) {}

private:
    int numA;

    // friend function declaration
    friend int greatest(ClassA, ClassB);
};

class ClassB
{

public:
    // constructor to initialize numB to 1
    ClassB() : numB(1) {}

private:
    int numB;

    // friend function declaration
    friend int greatest(ClassA, ClassB);
};

// access members of both classes
int greatest(ClassA objectA, ClassB objectB)
{

    return max(objectA.numA, objectB.numB);
}

int main()
{
    ClassA objectA;
    ClassB objectB;
    cout << "Greatest: " << greatest(objectA, objectB);
    return 0;
}