// write a program to print the following pattern
/**
    A B C D
    E F G H
    I J K L
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}