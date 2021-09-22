#include<iostream>

using namespace std;

class biggest
{
private:
    int a, b;

public:
    void display() //constructor function
    {
        if (a > b)
            cout << "Biggest no.:" << a << endl;
        else
            cout << "Biggest no.:" << b << endl;
    }

    ~biggest() //destructor function
    {
        cout << "Objects are destroyed" << endl;
    }

    biggest(int a, int b) //Bigger of two numbers
    {
       this->a = a;
       this->b = b; 
    }
};

int main()
{
    int x, y;
    cout << "Enter numbers you want to compare:" << endl;
    cin >> x >> y;
    biggest bigger (x, y);
    bigger.display();
    return 0;
}