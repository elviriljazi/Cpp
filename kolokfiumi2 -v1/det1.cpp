#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m = 9, n = 4;
    int A[m] = {5, 0, 9, 0, 3, 0, 4, 0, 10};
    int B[n];
    cout << setw(5) << "i" << setw(10) << "A[i]" << setw(10) << "k" << setw(10) << "B[k]" << endl;
    cout << "-------------------------------------" << endl;
    int k;
    for (int i = 0; i < n; i++)
    {
        k = 2 * i;
        B[i] = A[k] * k;
        cout << setw(5) << k << setw(10) << A[k] << setw(10) << i << setw(10) << B[i] << endl;
    }
    cout << "-------------------------------------" << endl;
    return 0;
}