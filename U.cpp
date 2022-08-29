#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,y;
    int x;
    cin>>n;
    x=n;
    y=n-x;
    if(x==n)
    {
       cout<<"int "<<x<<"\n";
    }
   else
        cout<<"float "<<x<<" "<<fixed<<setprecision(3)<<y<<"\n";
    return 0;
}
