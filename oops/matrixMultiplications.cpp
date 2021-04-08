#include <iostream>

using namespace std;

class MatrixMultiplication{
    public:
        int a[3][3];
        int b[3][3];
        int c[3][3];

        void InputMatrix();
        void multiply();
        void result();
};

void MatrixMultiplication::InputMatrix(){
    cout << "Enter the values for the first 3 x 3 matrix row wise" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the values for the second 3 x 3 matrix row wise" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
}

void MatrixMultiplication::multiply(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j]=0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void MatrixMultiplication::result(){
    cout << "The Resultant Matrix is: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
}

int main(){
    MatrixMultiplication x;
    cout << "Program to multiply 2 3X3 matrices: " << endl;
    x.InputMatrix();
    x.multiply();
    x.result();
    return 0;
}