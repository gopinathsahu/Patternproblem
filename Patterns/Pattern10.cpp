// write a program to print the following pattern 
/*
            A A A 
            B B B
            C C C*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n7umber";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch ='A'+i-1;
              cout<<ch<<" ";
        }
cout<<endl;
    }
}