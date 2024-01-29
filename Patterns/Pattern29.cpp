// write a program to print the  following pattern.
/*
    1      1
   212
  32123
 4321234
543212345
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>1;j--){
            cout<<j;
        }for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}