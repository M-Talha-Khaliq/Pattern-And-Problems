/*
    11111
     2222
      333
       44
        5

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=n;i>=1;i--){
        for( int j=n-1;j>=i;j--){
            cout<<" ";
        } for (int k=1;k<=i;k++) {
            cout<<n+1-i;
        } cout<<endl;
    }
    return 0;
}