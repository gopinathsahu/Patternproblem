// write a program to print the following pattern 
/*
          1
          2 3
          4 5 6
          7  8 9 10
          11 12 13 14 15
          */

 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<< " Enter the numbers";
    cin>>n;
    int sum=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          sum=sum+1;
          cout<< sum<<" ";

        }
        cout<<endl;
    }
 }        