// write a program to print the followeing pattern.

/*
1 2 3 4 5 6 7 7 6 5 4 3 2 1
1 2 3 4 5 6 * * 6 5 4 3 2 1
1 2 3 4 5 * * * * 5 4 3 2 1
1 2 3 4 * * * * * * 4 3 2 1
1 2 3 * * * * * * * * 3 2 1
1 2 * * * * * * * * * * 2 1
1 * * * * * * * * * * * * 1

 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter a number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "* ";
        }
        for (int j = (n - i + 1); j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}