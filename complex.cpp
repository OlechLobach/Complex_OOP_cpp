#include "complex.h"


Complex::Complex() : real(0), imag(0) {}
Complex::Complex(float r, float i) : real(r), imag(i) {}



ostream& operator<<(ostream& os, const Complex& num) {
    os << num.real << " + " << num.imag << "i";
    return os;
}

istream& operator>>(istream& is, Complex& num) {
    cout << "Enter the real and imaginary parts separated by a space: ";
    is >> num.real >> num.imag;
    return is;
}

Complex Complex::operator+(const Complex& c) const {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

Complex Complex::operator-(const Complex& c) const {
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}

bool Complex::operator==(const Complex& c) const {
    return (real == c.real) && (imag == c.imag);
}

bool Complex::operator!=(const Complex& c) const {
    return !(*this == c);
}

Complex Complex::operator-() const {
    Complex temp;
    temp.real = -real;
    temp.imag = -imag;
    return temp;
}