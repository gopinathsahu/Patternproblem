// write a program to print the following pattern
/*
       A
       B C
       D E F
       G H I J*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}