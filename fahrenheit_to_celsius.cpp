// Fahrenheit to celsius conversion

#include<iostream>
using namespace std;
int main () {
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius.";
    return 0;
}