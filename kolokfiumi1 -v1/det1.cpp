#include <iostream>

using namespace std;

int main()
{
    int m=3, n=3;
    int A[m][n]={{-1,2,3},{-2,-2,-3},{3,2,1}};
    int Sn = 0, Sp = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            //Shuma e antarve pozitiv
            if (A[i][j] > 0)
                Sp = Sp + A[i][j];
            //Shuma e antarve negativ
            if (A[i][j] < 0)
            {

                Sn = Sn + A[i][j];
                cout << "Anatari a" << i + 1 << j + 1 << "=" << A[i][j]<<endl;
                cout << "Shuma e shumave parciale eshte " << Sn << endl;
            }
        }
    return 0;
}