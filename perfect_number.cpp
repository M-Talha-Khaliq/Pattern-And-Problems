// Perfect number 

#include<iostream>
using namespace std;
int main (){
    int n;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
    }
    }
    if (sum==n && sum!=1){
        cout<< n<<" is a perfect number";
    }
     else cout<< n<<" is not a perfect number";
    return 0;
}