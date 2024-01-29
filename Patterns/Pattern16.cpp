// write a program to print the following pattern
/*
       E
       D E
       C D E
       B C D E
       A B C D E
       */
#include<iostream>
using namespace std;
int main(){
     int n;
    cout << "Enter a number";
    cin >> n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        char ch= 'Z'-(i-j);
        cout<<ch<<" ";
    }
    cout<<endl;
 }

}