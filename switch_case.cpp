// switch case

#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    switch (num) {
        case 1:
        cout << "Number is 1";
        break;
        case 2:
        cout << "Number is 2";
        break;
        case 3:
        cout << "Number is 3";
        break;
        case 4:
        cout << "Number is 4";
        break;
        case 5:
        cout << "Number is 5";
        break;
        default:
        cout << "Number is not 1, 2, 3, 4 or 5";
        }
}