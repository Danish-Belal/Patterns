#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int row, colm;
    cout << "Enter row and column\n";
    cin >> row >> colm;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if ( i==j || i==1 || i == row || j == 1 || j == colm)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}