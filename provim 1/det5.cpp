#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b,c;
    cout << "Jep vleren e a=" << endl;
    cin >> a;
    cout << "Jep vleren e b=" << endl;
    cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout<<"Hipotenuza eshte c="<<c<<endl;
    return 0;
}