#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n \n";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        {
            for (int j = 1; j <= i; j++)
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
