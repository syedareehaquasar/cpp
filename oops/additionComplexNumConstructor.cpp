#include <iostream>
using namespace std;

class Complex{
    public:
        int real, imaginary; //declaration of variables to be used

        // Empty Constructor
        Complex(){}

        // Constructor to accept real and imaginary part
        Complex(int r, int i){
            real = r;
            imaginary = i;
        }

        // func for adding two complex number
        Complex addComp(Complex C1, Complex C2){
            Complex res;
            res.real = C1.real + C2.real;
            res.imaginary = C1.imaginary + C2.imaginary;
            return res;
        }
};

int main(){
    // complex num 1
    Complex C1(3, 2);
    cout << "Complex number 1 : " << C1.real << " + " << C1.imaginary << "i" <<endl;

    // complex Num 2
    Complex C2(9, 5);
    cout << "Complex number 2 : " << C2.real << " + " << C2.imaginary << "i" << endl;

    Complex C3;
    C3 = C3.addComp(C1, C2);

    cout << "Sum of complex number : " << C3.real << " + " << C3.imaginary << "i" << endl;
}
