#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    double x;
    cin>>a>>b;
    x=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(x)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(x)<<"\n";
    cout<<"round "<<a<<" / "<<b<<" = "<<round(x)<<"\n";
    return 0;

}
