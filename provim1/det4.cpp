#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, n;
    cout << "Jep numrin e kolonave" << endl;
    cin >> m;
    cout << "Jep numrin e rreshtave" << endl;
    cin >> n;
    int R[m][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                R[i][j] = 8;
            if (i < j)
                R[i][j] = j + 2;
            if (i > j)
                R[i][j] = -4;
        }
    //Printimi i Matrices
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << R[i][j];
        }
        cout << endl;
    }

    return 0;
}