/*  
    2 4 6 8 10
    12 14 16 18 20
    22 24 26 28 30
    32 34 36 38 40
    42 44 46 48 50
 */

 #include <iostream>
using namespace std;
int k=0;
int main () {
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
             k+=2;
             cout<<k<<" ";
        }cout<<endl;
    }return 0;
}