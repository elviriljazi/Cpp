#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n = 3;
    int a, x, y;
    int V[n] = {-5, 1, 3};
    int a = INT_MIN;
    for (int i = 0; i < n; i++)
        if (V[i] > a)
            a = V[i];
    cout << "Jep vleren e x=" << endl;
    cin >> x;
    if (x <= 5)
        y = 2 * x + a;
    else
        y = 3 * x - 1;
    cout << "Vlera e funksionit ne piken x eshte y= f(x) = " << y << endl;
    return 0;
}