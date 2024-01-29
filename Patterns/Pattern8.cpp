// write a program to print the following pattern 
/*
           1
           2 3
           3 4 5
           4 5 6 7
           5 6 7 8 9
           */
#include<iostream>
using namespace std;
 int main(){
int n;
 cout<< "Enter the number ";
 cin>>n;
 int sum=1;
 for(int i=1;i<=n;i++){
    sum=i;
    for(int j=1;j<=i;j++){
cout<< sum <<" ";
sum=sum+1;


    }
   
    cout<<endl;
 }
 return 0;
 }