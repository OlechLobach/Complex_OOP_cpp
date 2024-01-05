
#include "complex.h"


int main() {
    Complex a, b, c;

    cout << "Enter the first complex number:\n";
    cin >> a;

    cout << "Enter the second complex number:\n";
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Are they equal? " << (a == b ? "Yes" : "No") << endl;
    cout << "Are they not equal? " << (a != b ? "Yes" : "No") << endl;

    c = -a;
    cout << "Negative of the first number: " << c << endl;

    return 0;
}