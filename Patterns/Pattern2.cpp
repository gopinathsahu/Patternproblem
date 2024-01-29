// write a program to print the numbers in the recgtangel form

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "ENter the number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i << " ";
        }
        cout<<endl;
    }
}
