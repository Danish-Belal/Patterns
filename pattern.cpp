#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter The value of row and column \n";
    cin >> row >> col;

    for (int i = 1; i <= row; i++)    //square pattern.
    {
        for (int j = 0; j <= col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
