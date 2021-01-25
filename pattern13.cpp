#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n \n";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}