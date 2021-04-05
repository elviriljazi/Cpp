#include <iostream>
#include <limits.h>

using namespace std;

int absolute(int abs)
{
    if (abs < 1)
        return -abs;
    return abs;
}

int main()
{
    int min = INT_MAX, m = 5;
    int K[m]={-2,-5,1,2,3};
    for (int i = 0; i < m; i++)
    {
        if (min > absolute(K[i]))
            min = absolute(K[i]);
    }
    cout<<"Elementi me vlere me te vogel absolute eshte "<<min<<endl;
}