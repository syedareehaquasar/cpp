#include <iostream>

using namespace std;

class MatrixMultiplication{
    public:
        int n, m, p, q;

        void InputMatrix();
        void multiply(int m, int n, int p, int q, int a[m][n], int b[p][q]);
        void result(int m, int q, int c[m][q]);
};

void MatrixMultiplication::InputMatrix(){
    cout << "Enter no. of rows and columns of first Matrix" << endl;
    cin >> m >> n;
    cout << "Enter no. of rows and columns of second Matrix" << endl;
    cin >> p >> q;
    if (n == p) {
        int a[m][n];
        int b[p][q];
        cout << "Enter the values for the first matrix row wise" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter the values for the second matrix row wise" << endl;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> b[i][j];
            }
        }
        multiply(m, n, p, q, a, b);
    }
    else {
        cout << "Can't multiply matrices - matrices are not confortable for multiplication" << endl;
    }
}

void MatrixMultiplication::multiply(int m, int n, int p, int q, int a[m][n], int b[p][q]){
    int c[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j]=0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    result(m, q, c);
}

void MatrixMultiplication::result(int m, int q, int c[m][q]){
    cout << "The Resultant Matrix is: \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }
}

int main(){
    MatrixMultiplication x;
    x.InputMatrix();
    return 0;
}