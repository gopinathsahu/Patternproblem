
// write a program to print the following pattern.
/*
             1
           2 3
         4 5 6
      7 8 9 10
11 12 13 14 15 

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter a number ";
    cin >> n;
    int sum=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=(n- i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <=  i ; k++)
        {

            cout << sum ;
            sum=sum+1;
        }
        cout << endl;
    }

}