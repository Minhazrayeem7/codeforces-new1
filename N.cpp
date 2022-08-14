#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    x=(int)x;
    if(x>=65 && x<=90)
    {
        x=x+32;
        cout<<(char)x<<"\n";
    }
    else if(x>=97 && x<=122)
    {
        x=x-32;
        cout<<(char)x<<"\n";
    }
    return 0;
}
