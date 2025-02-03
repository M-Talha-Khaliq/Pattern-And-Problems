// Largest among n numbers

#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Please enter number of elemets :";
    cin>>n;
    int array [n];
    for (int i=0;i<n;i++){
        cin>> array[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (array[i]>max){
            max=array[i];
    }
    }
    cout<<"The maximum number is : "<<max<<endl;
    return 0;

    }
