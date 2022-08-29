#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,r;
    char ch,q;
    cin>>a>>ch>>b>>q>>c;
    if(ch=='+')
    {
        r=a+b;
    }
    else  if(ch=='-')
    {
      r=a-b;
    }
    else  if(ch=='*')
    {
        r=a*b;
    }
    if(r==c)
    {
        cout<<"Yes"<<"\n";
    }
    else
        cout<<r<<"\n";

    return 0;
}

