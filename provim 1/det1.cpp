#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Jep numrin e kolonave" << endl;
    cin >> m;
    cout << "Jep numrin e rreshtave" << endl;
    cin >> n;
    int K[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Jep antarin a" << i + 1 << j + 1 << endl;
            cin >> K[i][j];
        }
    int P[m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (i % 2 == 0 || j % 2 == 0)
                P[i] = K[i][j] + i + j;
    cout << "P[" << m << "]={";
    for (int i = 0; i < m; i++)
        cout << P[i] << " ";
    cout << "}";
}