#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int sum(int B[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + B[i];
    return sum;
}
int mult(int B[],int n)
{
    int mult = 0;
    for (int i = 0; i < n; i++)
        mult = mult * B[i];
    return mult;
}
int main()
{
    int n = 3;
    int a;
    int B[3] = {3, -2, 1};
    //Rradhitja e vektorve
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (B[i] > B[j])
            {
                a = B[i];
                B[i] = B[j];
                B[j] = a;
            }
        }
    }
    //Printimi i vektorit
    cout<<"B["<<n<<"]={";
    for(int i=0;i<n;i++)
    cout<<B[i]<<",";
    cout<<"\b}"<<endl;
    //Shuma me nenfunksion
    cout<<"Shuma eshte S="<<sum(B,n)<<endl;
    //Prodhimi me nenfunksion
    cout<<"Prodhimi eshte P="<<mult(B,n)<<endl;
}