

#include <iostream>
using namespace std;

typedef struct complex {
    float real;
    float imag;
} complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main() {
    complexNumber num1, num2, complexSum;
    char signOfImag;

    cout << "For 1st complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> num1.real >> num1.imag;

    cout << endl
         << "For 2nd complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> num2.real >> num2.imag;
    complexSum = addComplexNumbers(num1, num2);
    signOfImag = (complexSum.imag > 0) ? '+' : '-';
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;

    cout << "Sum = " << complexSum.real << signOfImag << complexSum.imag << "i";

    return 0;
}

complexNumber addComplexNumbers(complex num1, complex num2) {
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}
