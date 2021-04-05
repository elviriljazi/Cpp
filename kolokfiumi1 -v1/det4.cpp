#include <iostream>

using namespace std;

int main()
{
    unsigned int x;
    int m = 6, n;
    int V[m] = {-7, 2, 3, 4, 5, 8};
    cout << "Jep vleren e x=" << endl;
    cin >> x;
    if (x < 0)
        cout << "Vlera e x me e vogel se zero";
    else
        for (int i = 0; i < m; i++)
            if (V[i] > x)
                n++;
    cout << "Numri i antarve me te medhenje se x eshte " << n << endl;
    return 0;
}