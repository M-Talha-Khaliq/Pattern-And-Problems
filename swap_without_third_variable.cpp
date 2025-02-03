// swap two numbers without third variable

#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: a = " << a << ", b = " << b;
    return 0;
}
