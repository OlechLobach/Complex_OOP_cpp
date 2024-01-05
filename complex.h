#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
   
    Complex();
    Complex(float r, float i);

    
    friend ostream& operator<<(ostream& os, const Complex& num);
    friend istream& operator>>(istream& is, Complex& num);
    Complex operator+(const Complex& c) const;
    Complex operator-(const Complex& c) const;
    bool operator==(const Complex& c) const;
    bool operator!=(const Complex& c) const;
    Complex operator-() const;
};

#endif