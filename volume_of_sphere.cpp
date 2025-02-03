// Volume of sphere

#include<iostream>
using namespace std;
int main (){
    float r;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
    float v = (4.0/3.0)*3.14*r*r*r;
    cout<<"The volume of the sphere is: "<<v;
    return 0;
}