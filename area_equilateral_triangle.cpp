// Area of Equilateral Triangle

#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int s;
    cout << "Enter the side of the equilateral triangle: ";
    cin >> s;
    cout << "Area of the equilateral triangle is: " << (s*s*sqrt(3)/4);
    return 0;
}