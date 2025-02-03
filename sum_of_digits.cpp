// sum of digits of a number

#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    { int x= n % 10;
        sum = sum +x;
        n = n / 10;
        }
        cout << "Sum of digits of the number is: " << sum;
        return 0;
}
