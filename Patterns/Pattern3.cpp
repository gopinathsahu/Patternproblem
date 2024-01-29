// write a program to print the 1,2,3,4,5 in n number of rows by using the loop....

#include<iostream>
using namespace std;
int main(){
    int n;
   cout<<"enter a number ";
    cin>> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<< j << " ";

        }
        cout<< endl;
    }

}