#include <iostream>

using namespace std;

int main()
{
    int m = 3, n = 3;
    int A[m][n];
    int S = 0, P = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {

            if (i > j)
                for (int k = 1; k <= j - 1; k++)
                {
                    P = P * (i + k);
                    A[i][j] = 2 * i + P;
                }
            if (i <= j)
                for (int k = 1; k <= i + 1; k++)
                {
                    S = S + (2 * j - k);
                    A[i][j] = j + 2 * S;
                }
        }
    return 0;
}