/* write a program to print the 
                                 1 2 3
                                 4 5 6 
                                 7 8 9     for n=3*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=1;
    int diff=16;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          cout<< sum <<" ";
          sum=sum+1;
       
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<< diff <<" ";
          diff=diff-1;
       
        }
        cout<<endl;
    }
}                                 