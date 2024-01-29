// write a program to print the following pattern 
/*
         ********* 
       *********  
      *********   
     *********    
    *********     
   *********      
  *********       
 *********        
*********
*/
#include<iostream>
using namespace std;
 int main(){
     int n;
     cout<<" ENter a number";
     cin>>n;
     for(int i=1;i<=n;i++){
        // for space 
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
     }
 }